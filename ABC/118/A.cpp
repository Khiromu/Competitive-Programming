#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll a, b;
int main() {
    cin>>a>>b;
    if(b%a==0) cout<<a+b<<endl;
    else cout<<b-a<<endl;
    return 0;
}