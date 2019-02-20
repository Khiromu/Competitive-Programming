#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int k;
int main() {
    cin>>k;
    if(k%2==0) cout<<k*k/2/2<<endl;
    else cout<<(k/2)*(k/2+1)<<endl;
    return 0;
}