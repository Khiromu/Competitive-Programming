#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s;
ll cnt;
int main(){
    cin>>s;

    REP(i, 0, s.size()){
        if(s[i]=='2') cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}