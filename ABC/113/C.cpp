#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll p[101010], y[101010];
string id[101010];
int main() {
    cin>>n>>m;
    REP(i, 0, m) cin>>p[i]>>y[i];
    REP(i, 0, m) id[i]="000000000000";

    vector<vector<pair<ll, ll>>> vvp(n); // year, i
    REP(i, 0, m){
        vvp[p[i]-1].emplace_back(make_pair(y[i], i));
    }
    REP(i, 0, n){
        sort(vvp[i].begin(), vvp[i].end());
    }

//    REP(i, 0, n){
//        cout<<"i="<<i<<endl;
//        REP(j, 0, vvp[i].size()){
//            cout<<vvp[i][j].first<<" "<<vvp[i][j].second<<endl;
//        }
//    }

    REP(i, 0, n){
        REP(j, 0, vvp[i].size()){
            ll year=j+1;
            ll city=i+1;
            ll idx=0;

            while(city>0){
                id[vvp[i][j].second][5-idx]=(char)('0'+(city%10));
                city/=10;
                ++idx;
            }

            idx=0;
            while(year>0){
                id[vvp[i][j].second][11-idx]=(char)('0'+(year%10));
                year/=10;
                ++idx;
            }
        }
    }

    REP(i, 0, m){
        cout<<id[i]<<endl;
    }
    return 0;
}