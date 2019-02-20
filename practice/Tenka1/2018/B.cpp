#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll a, b, k;
int main() {
    cin>>a>>b>>k;

    while(k>0){
        if(a%2!=0) a--;
        b+=a/2;
        a/=2;
        k--;
        if(k<=0) break;

        if(b%2!=0) b--;
        a+=b/2;
        b/=2;
        k--;
    }

    cout<<a<<" "<<b<<endl;
    return 0;
}