#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll v[101010];
unordered_map<ll, ll> ump_even, ump_odd; //number, count
int main() {
    cin>>n;
    REP(i, 0, n) cin>>v[i];

    REP(i, 0, n){
        if(i%2==0){
            ump_even[v[i]]++;
        }
        else{
            ump_odd[v[i]]++;
        }
    }

    vector<pair<ll, ll>> vp_even, vp_odd; // count, number
    for(auto itr:ump_even){
        vp_even.emplace_back(make_pair(itr.second, itr.first));
    }
    for(auto itr:ump_odd){
        vp_odd.emplace_back(make_pair(itr.second, itr.first));
    }
    sort(vp_even.begin(), vp_even.end());
    reverse(vp_even.begin(), vp_even.end());
    sort(vp_odd.begin(), vp_odd.end());
    reverse(vp_odd.begin(), vp_odd.end());

    if(vp_even[0].second!=vp_odd[0].second){
        cout<<n-vp_even[0].first-vp_odd[0].first<<endl;
    }
    else{
        if(vp_even.size()==1 && vp_odd.size()==1){
            cout<<vp_even[0].first<<endl;
        }
        else if(vp_even.size()==1){
            cout<<n-vp_even[0].first-vp_odd[1].first<<endl;
        }
        else if(vp_odd.size()==1){
            cout<<n-vp_odd[0].first-vp_even[1].first<<endl;
        }
        else{
            cout<<n-max(vp_even[0].first+vp_odd[1].first, vp_even[1].first+vp_odd[0].first)<<endl;
        }
    }

    return 0;
}