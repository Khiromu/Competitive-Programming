#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
int main() {
    cin>>n;

    ll ans=0;
    REP(i, 1, n+1){
        ll cnt=0;
        if(i%2==0) continue;

        REP(j, 1, i+1){
            if(i%j==0) cnt++;
        }

        if(cnt==8) ans++;
    }
    cout<<ans<<endl;
    return 0;
}