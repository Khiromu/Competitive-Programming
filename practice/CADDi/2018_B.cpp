#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, h, w;
ll cnt;
int main(){
    cin>>n>>h>>w;
    REP(i, 0, n){
        ll a, b;
        cin>>a>>b;

        if(a>=h && b>=w) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}