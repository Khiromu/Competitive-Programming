#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
bool check_same(ll n){
    bool same=true;
    ll num=n%10;
    n/=10;
    while(n>0){
        if(n%10 != num){
            same=false;
            break;
        }
        n/=10;
    }
    return same;
}
int main() {
    cin>>n;

    while(1){
        if(check_same(n)){
            cout<<n<<endl;
            break;
        }
        n++;
    }
    return 0;
}