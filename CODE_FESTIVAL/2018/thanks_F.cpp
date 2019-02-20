#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m, k;
ll a[301];
ll cost[301];
ll root;
bool visited[301];
int main() {
    cin>>n>>m>>k;
    REP(i, 0, n) cin>>a[i];
    vector<vector<ll>> edge(n);

    REP(i, 0, edge.size()){
        if(a[i]==0) root=i;
        else{
            edge[i].emplace_back(a[i]-1);
            edge[a[i]-1].emplace_back(i);
        }
    }

    queue<pair<ll, ll>> que; // node, cost
    que.push(make_pair(root, 1));
    while(!que.empty()){
        pair<ll, ll> cur=que.front();
        visited[cur.first]=true;
        cost[cur.first]=cur.second;
        que.pop();

        REP(j, 0, edge[cur.first].size()){
            ll next=edge[cur.first][j];
            if(!visited[next]){
                que.push(make_pair(next, cur.second+1));
            }
        }
    }

    vector<pair<ll, ll>> vp; // cost, node
    REP(i, 0, n) vp.emplace_back(make_pair(cost[i], i));
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());

    REP(i, 0, n){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    vector<string> vs;
    REP(i, 0, n-m+1){
        ll sum=0;
        REP(j, i, m+i){
            sum+=vp[j].first;
        }

        cout<<"sum="<<sum<<endl;

        if(sum==k){
            vector<ll> v;
            REP(j, i, m+i){
                v.emplace_back(vp[j].second);
            }
            sort(v.begin(), v.end());

            string str="";
            REP(j, 0, v.size()){
                str+=to_string(v[j]+1);
            }
            vs.emplace_back(str);
        }
    }

    if(vs.size()==0) cout<<-1<<endl;
    else{
        sort(vs.begin(), vs.end());
        REP(i, 0, vs[0].size()-1){
            cout<<vs[0][i]<<" ";
        }
        cout<<vs[0][vs[0].size()-1]<<endl;
    }

    return 0;
}