#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int a[3];
int main() {
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    cout<<a[2]-a[0]<<endl;
    return 0;
}