#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, d;
ll a[1010];
int main(){
    cin>>n>>d;
    REP(i, 0, n) cin>>a[i];

    if(n<d){
        cout<<0<<endl;
        return 0;
    }

    sort(a, a+n);
    reverse(a, a+n);

    ll sum=0;
    REP(i, 0, n/d){
        sum+=a[d*(i+1)-1];
    }
    cout<<sum<<endl;
    return 0;
}