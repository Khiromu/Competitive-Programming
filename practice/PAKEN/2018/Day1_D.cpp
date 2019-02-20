#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;


int main(){
    ll n;
    ll cnt=0;
    cin>>n;
    REP(i, 0, n){
        ll a;
        cin>>a;
        if(a%2==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}