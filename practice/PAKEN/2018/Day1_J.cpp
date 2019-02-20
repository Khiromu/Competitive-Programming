#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w, s, t;
int main(){
    cin>>h>>w>>s>>t;

    if(h%2!=0 && w%2!=0 && ((s%2==0 && t%2!=0) || (s%2!=0 && t%2==0))) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return 0;
}