#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;


int main(){
    ll h, w, x, y;
    cin>>h>>w>>x>>y;

    if((h*w)%2!=0 && (x+y)%2!=0) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}