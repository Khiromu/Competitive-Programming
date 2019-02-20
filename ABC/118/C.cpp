#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[101010];
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main() {
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    sort(a, a+n);
    reverse(a, a+n);

    ll ans=a[0];
    REP(i, 1, n){
        ans=gcd(ans, a[i]);
    }

    cout<<ans<<endl;
    return 0;
}