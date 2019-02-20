#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m, a, b;
ll l[101], r[101];
ll orange[101];
int main() {
    cin>>n>>m>>a>>b;
    REP(i, 0, m) cin>>l[i]>>r[i];
    REP(i, 0, n) orange[i]=b;

    REP(i, 0, m){
        REP(j, l[i]-1, r[i]){
            orange[j]=a;
        }
    }

    ll ans=0;
    REP(i, 0, n) ans+=orange[i];
    cout<<ans<<endl;
    return 0;
}