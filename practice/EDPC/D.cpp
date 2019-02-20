#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, w;
ll weight[101], value[101];
ll dp[101010];
int main(){
    cin>>n>>w;
    REP(i, 0, n) cin>>weight[i]>>value[i];
    REP(j, 1, w+1) dp[j]=-1;

    dp[0]=0;
    REP(i, 0, n){
        RREP(j, 0, w){
            if(dp[j]==-1) continue;
            if(j+weight[i]>w) continue;

            dp[j+weight[i]]=max(dp[j+weight[i]], dp[j]+value[i]);
        }
    }

    ll ans=0;
    REP(j, 0, w+1) ans=max(ans, dp[j]);
    cout<<ans<<endl;
    return 0;
}