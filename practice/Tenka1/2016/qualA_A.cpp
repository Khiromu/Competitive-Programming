#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll ans=0;
int main() {
    REP(i, 1, 101){
        if(i%3!=0 && i%5!=0) ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}