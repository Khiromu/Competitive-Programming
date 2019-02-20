#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll sum[101010];
ll ans;
int main(){
    cin>>n;
    REP(i, 0, n){
       ll a, b;
       cin>>a>>b;
       sum[i]=a+b;
       ans-=b;
    }

    sort(sum, sum+n);
    reverse(sum, sum+n);

    REP(i, 0, n){
        if(i%2==0) ans+=sum[i];
    }

    cout<<ans<<endl;
    return 0;
}