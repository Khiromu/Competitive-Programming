#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, h, w;
int main(){
    cin>>n>>h>>w;

    ll ans=0;
    REP(i, 0, n-h+1){
        REP(j, 0, n-w+1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}