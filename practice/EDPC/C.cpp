#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll val[1010101][3];
ll dp[101010][3];
int main(){
    cin>>n;
    REP(i, 0, n) cin>>val[i][0]>>val[i][1]>>val[i][2];

    dp[0][0]=val[0][0];
    dp[0][1]=val[0][1];
    dp[0][2]=val[0][2];
    REP(i, 1, n){
        REP(j, 0, 3){
            REP(k, 0, 3){
                if(j==k) continue;
                dp[i][k]=max(dp[i][k], dp[i-1][j]+val[i][k]);
            }
        }
    }
    cout<<max(max(dp[n-1][0], dp[n-1][1]), dp[n-1][2])<<endl;
    return 0;
}