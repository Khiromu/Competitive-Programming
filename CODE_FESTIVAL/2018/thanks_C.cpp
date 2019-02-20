#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll x[101010];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>x[i];

    sort(x, x+n);

    ll ans=0;
    REP(i, 0, n/2){
        REP(j, 0, i+1){
            if(n%2==0 && i==(n/2-1)){
                ans+=x[n-j-1]-x[i-j];
            }
            else{
                ans+=2*(x[n-j-1]-x[i-j]);
            }
        }
    }

//    if(n%2==0){
//        REP(j, 0, n/2+1){
//            ans+=x[n-j-1]-x[n/2-j];
//        }
//    }
    cout<<ans<<endl;
}