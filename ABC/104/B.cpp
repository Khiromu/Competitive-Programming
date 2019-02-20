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

    bool flag=true;
    if(s[0]!='A') flag=false;

    int cntc=0;
    REP(i, 2, s.size()-1){
        if(s[i]=='C') cntc++;
    }
    if(cntc!=1) flag=false;

    REP(i, 1, s.size()){
        if(s[i]=='C') continue;
        if(s[i]<'a' || s[i]>'z') flag=false;
    }

    if(flag) cout<<"AC"<<endl;
    else cout<<"WA"<<endl;
    return 0;
}