#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string a;
ll b;
int main() {
    cin>>a>>b;

    ll x=b%a.size();
    if(x==0) cout<<a[a.size()-1]<<endl;
    else cout<<a[x-1]<<endl;
    return 0;
}