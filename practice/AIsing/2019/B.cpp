#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, a, b;
ll cnta, cntb, cntc;
int main(){
    cin>>n>>a>>b;

    REP(i, 0, n){
        ll p;
        cin>>p;
        if(p<=a) cnta++;
        else if(a<p && p<=b) cntb++;
        else cntc++;
    }
    cout<<min(min(cnta, cntb), cntc)<<endl;
    return 0;
}