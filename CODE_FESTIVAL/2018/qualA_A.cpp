#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll a, b, c, s;
int main() {
    cin>>a>>b>>c>>s;

    if(a+b+c<=s && s<=a+b+c+3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}