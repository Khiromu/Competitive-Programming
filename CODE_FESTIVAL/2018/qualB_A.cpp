#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
int main() {
    cin>>n;

    ll cnt=0;
    REP(i, 1, 101){
        if(i%n==0) cnt++;
    }

    cout<<100-cnt<<endl;
    return 0;
}