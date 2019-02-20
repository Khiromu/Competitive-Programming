#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll t, a, b, c, d;
int main() {
    cin>>t>>a>>b>>c>>d;

    ll ans=0;
    if(c<=t){
        ans+=d;
        t-=c;
    }
    if(a<=t){
        ans+=b;
    }

    cout<<ans<<endl;
}