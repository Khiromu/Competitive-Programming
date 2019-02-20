#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w;
ll a[501][501];
ll ans;
int main(){
    cin>>h>>w;
    REP(i, 0, h) REP(j, 0, w) cin>>a[i][j];

    REP(i, 0, h){
        REP(j, 0, w){
            if((i==0&&j==0) || (i==0&&j==w-1) || (i==h-1&&j==0) || (i==h-1&&j==w-1)){
                ans+=(a[i][j]*h*w);
            }
            else if(i==0 || i==h-1){
                ans+=(a[i][j]*(j+1)*(w-j)*h);
            }
            else if(j==0 || j==w-1){
                ans+=(a[i][j]*(i+1)*(h-i)*w);
            }
            else{
                ans+=(a[i][j]*(j+1)*(i+1)*(w-j)*(h-i));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}