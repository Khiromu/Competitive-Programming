#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[101010];
int main(){
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    bool first=false;
    REP(i, 0, n) {
        if(a[i]%2!=0){
            first=true;
            break;
        }
    }
    if(first) cout<<"first"<<endl;
    else cout<<"second"<<endl;
    return 0;
}