#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
int main() {
    cin>>n;

    string ans="";
    while(n != 0){
        if(n%2!=0){
            ans="1"+ans;
            n--;
        }
        else ans="0"+ans;
        n /= -2;
    }

    if(ans=="") ans="0";

    cout<<ans<<endl;
    return 0;
}