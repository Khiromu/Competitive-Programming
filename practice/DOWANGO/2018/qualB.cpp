#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll a[1010];
ll sum[1010];
map<ll, ll> mp;
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>a[i];

    REP(i, 0, n) sum[i+1]=sum[i]+a[i];
    REP(i, 1, n+1){
        REP(j, i, n+1){
            mp[sum[j]-sum[j-i]]++;
        }
    }

    vector<pair<ll, ll>> vp;
    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        vp.emplace_back(make_pair(itr->first, itr->second));
    }

    ll ans=0;
    RREP(i, 0, 41){
        vector<pair<ll, ll>> vpll;
        ll cnt=0;
        for(auto itr:vp){
            if(itr.first & (1LL<<i)){
                cnt+=itr.second;
                vpll.emplace_back(make_pair(itr.first, itr.second));
            }
        }

        if(cnt>=k){
            ans+=(1LL<<i);
            vp.clear();
            for(auto itr:vpll){
                vp.emplace_back(make_pair(itr.first, itr.second));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}