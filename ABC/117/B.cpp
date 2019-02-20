#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll l[101];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>l[i];

    sort(l, l+n);

    ll sum=0;
    REP(i, 0, n-1){
        sum+=l[i];
    }

    if(sum > l[n-1]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}