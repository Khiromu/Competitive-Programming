#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll func(ll n){
    return floor((4.0+n*n)/8.0);
}
int main() {
    cout<<func(func(func(20)))<<endl;
    return 0;
}