#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
string a, b, c;
int main(){
    cin>>n>>a>>b>>c;

    int ans=0;
    REP(i, 0, n){
        if(a[i]==b[i] && b[i]==c[i]){
            ans+=0;
        }
        else if(a[i]==b[i] || b[i]==c[i] || c[i]==a[i]){
            ans+=1;
        }
        else{
            ans+=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}