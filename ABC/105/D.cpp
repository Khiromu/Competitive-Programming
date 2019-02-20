#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll a[100001];
ll sum[100001];
map<ll, ll> mp;
int main() {
    cin>>n>>m;
    REP(i, 0, n){
        cin>>a[i];
        sum[i+1]=(sum[i]+a[i])%m;
    }

    ll ans=0;
    REP(i, 0, n+1){
        ans+=mp[sum[i]];
        mp[sum[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}