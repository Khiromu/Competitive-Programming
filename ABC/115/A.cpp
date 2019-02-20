#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll d;
int main() {
    cin>>d;

    if(d==25) cout<<"Christmas"<<endl;
    else if(d==24) cout<<"Christmas Eve"<<endl;
    else if(d==23) cout<<"Christmas Eve Eve"<<endl;
    else cout<<"Christmas Eve Eve Eve"<<endl;
    return 0;
}