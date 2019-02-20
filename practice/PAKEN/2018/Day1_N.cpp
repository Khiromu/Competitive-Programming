#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w;
ll a[101010], b[101010];
vector<pair<ll, bool>> vp; // <a[i]or[b[i], is a>
int main(){
    cin>>h>>w;
    REP(i, 0, h){
        cin>>a[i];
        vp.emplace_back(a[i], true);
    }
    REP(j, 0, w){
        cin>>b[j];
        vp.emplace_back(b[j], false);
    }

    sort(vp.begin(), vp.end());

    ll ans=0;
    ll cnth=w, cntw=h;
    for(auto itr : vp){
        if(itr.second){
            ans+=(itr.first*cnth);
            cntw--;
        }
        else{
            ans+=(itr.first*cntw);
            cnth--;
        }

        if(cnth<=0 || cntw<=0) break;
    }

    cout<<ans<<endl;
    return 0;
}