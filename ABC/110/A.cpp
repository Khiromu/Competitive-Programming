#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll x[3];
int main() {
    cin>>x[0]>>x[1]>>x[2];
    sort(x, x+3);
    reverse(x, x+3);

    cout<<10*x[0]+x[1]+x[2]<<endl;
    return 0;
}