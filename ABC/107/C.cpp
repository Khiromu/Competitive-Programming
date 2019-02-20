#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll x[100001];
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>x[i];

    ll ans=inf;
    REP(i, 0, n-k+1){
        if(x[i]<=0 && x[i+k-1]<=0){
            ans=min(ans, abs(x[i]));
        }
        else if(x[i]<=0 && x[i+k-1]>0){
            if(abs(x[i])<abs(x[i+k-1])){
                ans=min(ans, 2*abs(x[i])+abs(x[i+k-1]));
            }
            else{
                ans=min(ans, abs(x[i])+2*abs(x[i+k-1]));
            }
        }
        else{
            ans=min(ans, x[i+k-1]);
        }
    }
    cout<<ans<<endl;
    return 0;
}