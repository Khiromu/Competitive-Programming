#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n, k;
string s;
int main() {
    cin>>n>>k;
    if(n%k==0) cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}