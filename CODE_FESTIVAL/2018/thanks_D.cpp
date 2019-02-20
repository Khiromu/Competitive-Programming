#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s;
int main() {
    cin>>s;

    ll idx=0;
    ll ans=1;
    char tgt=s[idx];
    idx++;
    while(idx<s.size()){
        if(s[idx]<=tgt){
            ans++;
            tgt=s[idx];
        }

        idx++;
    }

    cout<<ans<<endl;
}