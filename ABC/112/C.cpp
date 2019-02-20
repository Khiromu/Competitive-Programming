#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll x[101], y[101], h[101];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>x[i]>>y[i]>>h[i];

    REP(i, 0, 101){
        REP(j, 0, 101){
            bool flag=true;
            ll H=1;
            REP(k, 0, n){
                if(h[k]>0){
                    H=h[k]+llabs(y[k]-i)+llabs(x[k]-j);
                    break;
                }
            }
            REP(k, 0, n){
                if((H-llabs(y[k]-i)-llabs(x[k]-j))<=0 && h[k]==0) continue;

                ll hh=h[k]+llabs(y[k]-i)+llabs(x[k]-j);
                if(hh!=H){
                    flag=false;
                    break;
                }
            }

            if(flag){
                cout<<j<<" "<<i<<" "<<H<<endl;
                return 0;
            }
        }
    }
    return 0;
}