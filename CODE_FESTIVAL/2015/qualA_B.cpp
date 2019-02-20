#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[31];
ll num[101];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    ll ans=0;
    REP(i, 0, n){
        num[a[i]]+=pow(2, n-i-1);
    }
    REP(i, 0, 101){
        ans+=(i*num[i]);
    }
    cout<<ans<<endl;
    return 0;
}