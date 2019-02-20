#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
double p[3030];
double dp[3030][3030];
int main(){
    cin>>n;
    REP(i, 0, n) cin>>p[i];

    dp[0][0]=1.0;
    REP(i, 0, n){
        REP(j, 0, i+1){
            dp[i-j+1][j]+=dp[i-j][j]*p[i];
            dp[i-j][j+1]+=dp[i-j][j]*(1.0-p[i]);
        }
    }

    double ans=0;
    REP(j, 0, n/2+1){
        ans+=dp[n-j][j];
    }
    printf("%.10lf\n", ans);
    return 0;
}