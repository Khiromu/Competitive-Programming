#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s;
ll k;
int main() {
    cin>>s>>k;
    ll idx=0;
    bool flag=false;

    while(k>=0){
        if(s[idx]!='1'){
            cout<<s[idx]<<endl;
            flag=true;
            break;
        }
        k--;
        idx++;
    }
    if(!flag) cout<<s[idx-1]<<endl;

    return 0;
}