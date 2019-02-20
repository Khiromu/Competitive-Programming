#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll a[101010], b[101010];
int main() {
    cin>>n>>m;
    REP(i, 0, n) cin>>a[i];
    REP(i, 0, m) cin>>b[i];

    sort(a, a+n);
    sort(b, b+m);

    ll ia=0, ib=0;
    while(ia<n && ib<m){
        if(a[ia]>=b[ib]){
            ia++;
            ib++;
        }
        else{
            ia++;
        }
    }

    if(ib>=m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}