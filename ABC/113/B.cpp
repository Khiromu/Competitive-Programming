#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
double t, a;
double h[1010];
int main() {
    cin>>n>>t>>a;
    REP(i, 0, n) cin>>h[i];

    ll ans;
    double diff=(double)inf;
    REP(i, 0, n){
        double temp=t-(0.006*h[i]);
        if(abs(temp-a) < diff){
            diff=abs(temp-a);
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}