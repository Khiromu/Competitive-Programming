#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s, t;
int main() {
    cin>>s>>t;

    bool flag=false;
    REP(i, 0, s.size()){
        bool iql=true;
        REP(j, 0, s.size()){
            if(s[(i+j)%s.size()]!=t[j]){
                iql=false;
                break;
            }
        }
        if(iql) flag=true;
    }
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}