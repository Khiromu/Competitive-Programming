#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string n;
int main() {
    cin>>n;

    REP(i, 0, n.size()){
        if(n[i]=='1') cout<<9;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}