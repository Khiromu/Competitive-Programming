#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll t[101010], d[101010];
vector<pair<ll, ll>> all, selected; // order of <d_i, index>
ll used[101010];
ll var, ans;
int main() {
    cin>>n>>k;
    REP(i, 0, n){
        cin>>t[i]>>d[i];
        all.emplace_back(d[i], t[i]);
    }

    sort(all.begin(), all.end());
    reverse(all.begin(), all.end());

    set<ll> st;
    REP(i, 0, k){
        selected.emplace_back(all[i].first, all[i].second);
        ans+=all[i].first;
        used[all[i].second]++;
        st.insert(all[i].second);
    }
    var=st.size();
    ans+=(var*var);

    ll cur=ans, idx=k;
    RREP(i, 0, k){
        if(used[selected[i].second]<=1) continue;

        while(idx<n){
            if(used[all[idx].second]<=0){
                used[all[idx].second]=1;
                used[selected[i].second]--;
                break;
            }
            idx++;
        }
        if(idx==n) break;

        cur-=selected[i].first;
        cur-=(var*var);
        var++;
        cur+=all[idx].first;
        cur+=(var*var);

        ans=max(ans, cur);
    }

//    REP(i, 0, all. size()){
//        cout<<all[i].first<<" "<<all[i].second<<endl;
//    }

    cout<<ans<<endl;
    return 0;
}