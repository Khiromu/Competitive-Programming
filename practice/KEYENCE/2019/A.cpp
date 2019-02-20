#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n[4];
int main(){
    cin>>n[0]>>n[1]>>n[2]>>n[3];

    sort(n, n+4);
    if(n[0]==1 && n[1]==4 && n[2]==7 && n[3]==9) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}