#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s, t;
ll cnts[26], cntt[26];
int main() {
    cin>>s>>t;

    REP(i, 0, s.size()){
        cnts[s[i]-'a']++;
    }
    REP(i, 0, t.size()){
        cntt[t[i]-'a']++;
    }

    sort(cnts, cnts+26);
    sort(cntt, cntt+26);

    bool flag=true;
    REP(i, 0, 26){
        if(cnts[i]!=cntt[i]){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}