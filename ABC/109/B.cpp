#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int main() {
    int n;
    set<string> ss;
    string s[101];
    cin>>n;
    REP(i, 0, n){
        cin>>s[i];
        ss.insert(s[i]);
    }

    bool flag=true;
    REP(i, 0, n-1){
        if(s[i][s[i].size()-1] != s[i+1][0]) flag=false;
    }
    if(flag && ss.size()==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}