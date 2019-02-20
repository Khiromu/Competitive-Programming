#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define MP(a, b) make_pair(a, b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w;
ll a[501][501];
int main() {
    vector<pair<pair<ll, ll>, pair<ll, ll>>> vp;
    cin>>h>>w;
    REP(i, 0, h){
        REP(j, 0, w){
            cin>>a[i][j];
        }
    }

    REP(i, 0, h){
        if(i%2==0){
            REP(j, 0, w-1){
                if(a[i][j]%2!=0){
                    a[i][j+1]++;
                    vp.emplace_back(MP(MP(i, j), MP(i, j+1)));
                }
            }
            if(i!=h-1 && a[i][w-1]%2!=0){
                a[i+1][w-1]++;
                vp.emplace_back(MP(MP(i, w-1), MP(i+1, w-1)));
            }
        }
        else{
            RREP(j, 1, w){
                if(a[i][j]%2!=0){
                    a[i][j-1]++;
                    vp.emplace_back(MP(MP(i, j), MP(i, j-1)));
                }
            }
            if(i!=h-1 && a[i][0]%2!=0){
                a[i+1][0]++;
                vp.emplace_back(MP(MP(i, 0), MP(i+1, 0)));
            }
        }
    }

    cout<<vp.size()<<endl;
    REP(i, 0, vp.size()){
        cout<<vp[i].first.first+1<<" "<<vp[i].first.second+1<<" "<<vp[i].second.first+1<<" "<<vp[i].second.second+1<<endl;
    }
    return 0;
}