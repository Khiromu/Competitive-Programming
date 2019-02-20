#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

/*
 * a^(-1) = a^(p-2) mod p
 * -> b/a = b*a^(p-2)
 *
 */
ll n, m;
// a^p
long modpow(ll a, ll p){
    if(p==0) return 1;
    if(p%2==0){
        ll halfp=p/2;
        ll half=modpow(a, halfp);
        return half*half%mod;
    }
    else{
        // pを偶数にするために-1
        return a*modpow(a, p-1)%mod;
    }
}
ll comb(ll a, ll b){
    if(b>a-b) return comb(a, a-b);

    ll ansMul=1;
    ll ansDiv=1;
    REP(i, 0, b){
        ansMul*=(a-i);
        ansDiv*=(i+1);
        ansMul%=mod;
        ansDiv%=mod;
    }

    // ansMul/ansDivをansDivの逆元を用いて行う
    ll ans = ansMul*modpow(ansDiv, mod-2)%mod;

    return ans;
}
int main() {
    cin>>n>>m;

    ll ans=1;
    ll res=m;
    for(ll i=2; i*i<=res; i++){
        if(res%i==0){
            ll cnt=0;
            while(res%i==0){
                cnt++;
                res/=i;
            }
            ans*=comb(n+cnt-1, n-1); // n-1 == cnt
            ans%=mod;
        }
    }

    if(res!=1){
        // 素数が残っている分を処理
        ans*=comb(n, n-1); // n-1 == cnt
        ans%=mod;
    }

    cout<<ans<<endl;
    return 0;
}