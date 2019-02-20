#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll a[51];
ll cnt[51]; // 割れる回数
ll dp[51][61][2];
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>a[i];

    REP(i, 0, n){
        ll x=a[i];
        while(x>0){
            x/=2;
            cnt[i]++;
        }
    }



    REP(i, 0, n){
        cout<<cnt[i]<<endl;
    }
    return 0;
}