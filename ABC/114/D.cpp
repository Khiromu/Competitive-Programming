#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
bool isPrime[101];
void calc_prime(ll n) {
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i < n + 1; i++) isPrime[i] = true;

    for (ll i = 2; i*i <= n; i++) {
        for (ll j = i * 2; j < n + 1; j += i) {
            isPrime[j] = false;
        }
    }
    return;
}
int main() {
    cin>>n;

    calc_prime(n);
    vector<ll> prime, e;
    REP(i, 0, n+1){
        if(isPrime[i]) prime.emplace_back(i);
    }

    map<ll, ll> mp;
    for(auto itr:prime){
        ll idx=1;
        ll cnt=0;
        while(pow(itr, idx)<=n){
            cnt+=(n/(ll)pow(itr, idx));
            idx++;
        }
        mp[itr]=cnt;
        e.emplace_back(cnt);
    }

    REP(i, 0, e.size()){
        cout<<i<<" "<<e[i]<<endl;
    }

    ll ans=0;
    REP(i, 0, e.size()){
        if(e[i]>=74) ans++;
    }
    REP(i, 0, e.size()){
        REP(j, i+1, e.size()){
            if(e[i]>=24 && e[j]>=2) ans++;
        }
    }
    REP(i, 0, e.size()){
        REP(j, i+1, e.size()){
            if(e[i]>=14 && e[j]>=4) ans++;
        }
    }
    REP(i, 0, e.size()){
        REP(j, i+1, e.size()){
            REP(k, j+1, e.size()){
                if(e[i]>=4 && e[j]>=4 && e[k]>=2) ans++;
            }
        }
    }
    cout<<ans<<endl;

//    ll prod=1;
//    for(auto itr:mp){
//        prod*=(itr.second+1);
//        cout<<itr.first<<" "<<itr.second<<endl;
//    }
    //cout<<prod<<endl;
    return 0;
}