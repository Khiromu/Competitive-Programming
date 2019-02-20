#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s, str="keyence";
int main(){
    cin>>s;

    bool flag=false;
    if(s==str) flag=true;
    REP(i, 1, s.size()-6){
        for(ll j=0; i+j<=s.size(); j++){
            string sub=s;
            sub.erase(sub.begin()+j, sub.begin()+i+j);
            if(sub==str) flag=true;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}