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
    REP(j, 1, 101010) dp[j]=inf;

    dp[0]=0;
    REP(i, 0, n){
        RREP(j, 0, 100001){
            if(dp[j]==inf) continue;
            if(dp[j]+weight[i]>w) continue;

            dp[j+value[i]]=min(dp[j+value[i]], dp[j]+weight[i]);
        }
    }

    RREP(j, 0, 100001){
        if(dp[j]==inf) continue;

        cout<<j<<endl;
        break;
    }
    return 0;
}