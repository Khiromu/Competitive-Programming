#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, x;
ll sz[51];
ll pt[51];
int main() {
    cin>>n>>x;

    sz[0]=1;
    pt[0]=1;
    REP(i, 1, n+1){
        sz[i]=sz[i-1]*2+3;
        pt[i]=pt[i-1]*2+1;
    }

    REP(i, 0, n+1){
        cout<<sz[i]<<" "<<pt[i]<<" "<<sz[i]-pt[i]<<endl;
    }
    return 0;
}