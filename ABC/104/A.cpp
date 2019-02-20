#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll x;
int main() {
    cin>>x;
    if(x<1200) cout<<"ABC"<<endl;
    else if(x<2800) cout<<"ARC"<<endl;
    else cout<<"AGC"<<endl;
    return 0;
}