#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll x, y;
int main() {
    cin>>x>>y;

    while(x>0 && y>0){
        if(x>=y){
            x-=3;
            y-=1;
        }
        else{
            x-=1;
            y-=3;
        }
    }

    if(x==0 && y==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}