#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
bool judge(ll x, ll y){
    if(y<=(x+n) && y>=(x-n) && y>=(-x+n) && y<=(-x+3*n)) return true;
    else return false;
}
int main() {
    cin>>n;

    ll cnt=0;
    for(ll i=0; i<2*n; i+=2){
        for(ll j=0; j<2*n; j+=2){
            if(judge(j, i) && judge(j+2, i) && judge(j, i+2) && judge(j+2, i+2)) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}