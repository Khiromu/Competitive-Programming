#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w;
string a[1010];
ll dp[1010][1010];
int main(){
    cin>>h>>w;
    REP(i, 0, h) cin>>a[i];

    dp[1][1]=1;
    REP(i, 0, h){
        REP(j, 0, w){
            if(i==0 && j==0) continue;
            if(a[i][j]=='#') continue;

            dp[i+1][j+1]=(dp[i][j+1]+dp[i+1][j])%mod;
        }
    }

    cout<<dp[h][w]<<endl;
    return 0;
}