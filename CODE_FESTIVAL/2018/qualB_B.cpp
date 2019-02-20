#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, x;
vector<pair<ll, ll>> vp;
int main() {
    cin>>n>>x;
    REP(i, 0, n){
        ll a, b;
        cin>>a>>b;
        vp.emplace_back(make_pair(b, a));
    }

    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());

    ll ans=0;
    ans+=(vp[0].first*(vp[0].second+x));
    REP(i, 1, n){
        ans+=(vp[i].first*vp[i].second);
    }

    cout<<ans<<endl;
    return 0;
}