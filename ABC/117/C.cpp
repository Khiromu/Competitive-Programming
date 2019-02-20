#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll x[101010];
pair<ll, ll> sect[101010]; // diff, index
vector<ll> cand;
int main() {
    cin>>n>>m;
    REP(i, 0, m) cin>>x[i];

    if(n>=m){
        cout<<0<<endl;
    }
    else{
        sort(x, x+m);

        REP(i, 0, m-1){
            sect[i]=make_pair(abs(x[i]-x[i+1]), i);
        }

        sort(sect, sect+m-1);
        reverse(sect, sect+m-1);

        REP(i, 0, n-1){
            cand.emplace_back(sect[i].second);
        }
        sort(cand.begin(), cand.end());

        ll ans=0, idx=0;
        REP(i, 0, n-1){
            ans+=abs(x[idx]-x[cand[i]]);
            idx=cand[i]+1;
        }
        ans+=abs(x[idx]-x[m-1]);
        cout<<ans<<endl;
    }
    return 0;
}