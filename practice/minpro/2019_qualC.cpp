#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll k, a, b;
int main(){
    cin>>k>>a>>b;

    if(b-a > 2){
        ll ans=0;
        if(a+1<=k){
            ans+=b;
            k-=a+1;
            ans+=(k/2*(b-a))+(k%2);
            cout<<ans<<endl;
        }
        else{
            cout<<1+k<<endl;
        }
    }
    else{
        cout<<1+k<<endl;
    }
    return 0;
}