#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;


int main(){
    ll n, a, b, c;
    cin>>n>>a>>b>>c;

    cout<<n-(a+b-c)<<endl;
    return 0;
}