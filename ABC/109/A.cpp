#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    if((a*b)%2==0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}