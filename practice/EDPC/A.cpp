#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll h[101010];
ll dp[101010];
int main(){
    cin>>n;
    REP(i, 0, n) cin>>h[i];
    REP(i, 1, n+2) dp[i]=inf;

    REP(i, 0, n-1){
        dp[i+1]=min(dp[i+1], dp[i]+abs(h[i]-h[i+1]));
        dp[i+2]=min(dp[i+2], dp[i]+abs(h[i]-h[i+2]));
    }

    cout<<dp[n-1]<<endl;
    return 0;
}