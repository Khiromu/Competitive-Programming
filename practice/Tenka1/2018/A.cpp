#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s;
int main() {
    cin>>s;

    if(s.size()==2) cout<<s<<endl;
    else{
        RREP(i, 0, s.size()){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}