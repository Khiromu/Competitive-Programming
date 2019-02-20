#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m, X, Y;
ll x[101], y[101];
int main() {
    cin>>n>>m>>X>>Y;
    REP(i, 0, n) cin>>x[i];
    REP(i, 0, m) cin>>y[i];

    sort(x, x+n);
    sort(y, y+m);
    bool flag=false;
    REP(i, -100, 101){
        if(X<i && i<=Y && x[n-1]<i && i<=y[0]){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"No War"<<endl;
    else cout<<"War"<<endl;
    return 0;
}