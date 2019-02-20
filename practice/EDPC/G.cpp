#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
vector<vector<ll>> edge(101010);
ll dp[101010];
int main(){
    cin>>n>>m;
    REP(i, 0, m){
        ll x, y;
        cin>>x>>y;
        edge[x].emplace_back(y);
    }
    dp[0]=-1;
    REP(i, 1, n+1){
        edge[0].emplace_back(i);
        dp[i]=-1;
    }

    stack<ll> stk;
    stk.push(0);
    while(!stk.empty()){
        // ll cur=que.front();
        ll cur=stk.top();
        stk.pop();
        REP(j, 0, edge[cur].size()){
            ll next=edge[cur][j];
            if(dp[cur]>=dp[next]){
                dp[next]=dp[cur]+1;
                stk.push(next);
            }
        }
    }

    ll ans=0;
    REP(i, 0, n+1){
        ans=max(ans, dp[i]);
    }
    cout<<ans<<endl;

//    REP(i, 0, 10){
//        REP(j, 0, edge[i].size()){
//            cout<<i<<"->"<<edge[i][j]<<endl;
//        }
//    }
    return 0;
}