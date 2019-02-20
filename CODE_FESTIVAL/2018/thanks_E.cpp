#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll t;
ll a[301];
ll dp[301][601]; // i(0~t)までを考慮して、iがj個余るような場合の数
int main() {
    cin>>t;
    REP(i, 0, t) cin>>a[i];

    dp[0][0]=1;
    REP(i, 0, t){
        REP(j, 0, a[i]+1){
            REP(k, 0, 301){

            }
        }
    }

}