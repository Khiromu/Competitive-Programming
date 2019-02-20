#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
int a[3001];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    ll sum=0;
    REP(i, 0, n) sum+=a[i];
    cout<<sum-n<<endl;
    return 0;
}