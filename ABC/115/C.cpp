#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll h[101010];
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>h[i];

    sort(h, h+n);
    ll mn=inf;
    REP(i, 0, n-k+1){
        mn=min(mn, h[i+k-1]-h[i]);
    }
    cout<<mn<<endl;
    return 0;
}