#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll sum[51];
int main() {
    cin>>n>>m;
    REP(i, 0, n){
        ll k, a;
        cin>>k;
        REP(j, 0, k){
            cin>>a;
            sum[a-1]++;
        }
    }

    ll ans=0;
    REP(i, 0, m){
        if(sum[i]==n) ans++;
    }
    cout<<ans<<endl;
    return 0;
}