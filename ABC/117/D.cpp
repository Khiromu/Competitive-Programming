#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll a[101010];
ll func(ll x){
    ll ans=0;
    REP(i, 0, n){
        ans+=(x^a[i]);
    }
    return ans;
}
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>a[i];

    if(k==0){
        cout<<func(0)<<endl;
    }
    else{
        ll idx=0, ans=0, tmp=(1<<idx);
        while(tmp <= k){
            ll cnt0=0;
            REP(i, 0, n){
                if((a[i] & tmp) == 0) cnt0++;
            }

            if(cnt0 > n/2) ans+=tmp;

            idx++;
            tmp=(1<<idx);
        }

        cout<<func(ans)<<endl;
    }


//    cout<<f(0)<<endl;
//    cout<<f(1)<<endl;
//    cout<<f(2)<<endl;
//    cout<<f(3)<<endl;
//    cout<<f(4)<<endl;
//    cout<<f(5)<<endl;
//    cout<<f(6)<<endl;
//    cout<<f(7)<<endl;
//    cout<<f(8)<<endl;
//    cout<<f(9)<<endl;
    return 0;
}