#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll a[100001];
int main() {
    cin>>n>>k;
    REP(i, 0, n) cin>>a[i];

    ll sum=0;
    REP(i, 0, n){
        sum+=a[i];
        if(sum>=k){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}