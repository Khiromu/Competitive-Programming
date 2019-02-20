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

    int ans=100000000;
    REP(i, 0, s.size()-2){
        string str=s.substr(i, 3);
        ans=min(ans, abs(753-stoi(str)));
    }
    cout<<ans<<endl;
    return 0;
}