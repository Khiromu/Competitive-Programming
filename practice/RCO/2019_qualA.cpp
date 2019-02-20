#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll x[202], y[202];
bool used[202];
vector<ll> ans;
int main(){
    cin>>n;
    REP(i, 0, n) cin>>x[i]>>y[i];

    ll tgt=250*250;
    ans.emplace_back(0);
    used[0]=true;
    REP(i, 0, n){
        ll dist=501*501;
        ll idx=-1;
        REP(j, 0, n){
            if(used[j]) continue;
            ll d=abs(x[ans[i]]-x[j])*abs(x[ans[i]]-x[j])+abs(y[ans[i]]-y[j])*abs(y[ans[i]]-y[j]);

            if(abs(tgt-d) < abs(tgt-dist)){
                dist=d;
                idx=j;
            }
        }
        if(idx!=-1){
            ans.emplace_back(idx);
            used[idx]=true;
        }
    }

    REP(i, 0, ans.size()){
        cout<<ans[i]<<endl;
    }
    return 0;
}