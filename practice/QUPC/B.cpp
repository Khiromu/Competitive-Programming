#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll q;
ll a[51], b[51], c[51];
int main() {
    cin>>q;
    REP(i, 0, q) cin>>a[i]>>b[i]>>c[i];

    REP(i, 0, q){
        if(c[i]%2!=0){
            cout<<"No"<<endl;
            continue;
        }

        ll sum=100*a[i]+10*b[i]+c[i];
        bool flag=false;
        REP(x, 0, a[i]+1){
            REP(y, 0, b[i]+1){
                REP(z, 0, c[i]+1){
                    if(100*x+10*y+z == sum/2){
                        flag=true;
                        break;
                    }
                }
            }
        }
        /*
        if(a[i]%2==0 && b[i]%2==0){
            flag=true;
        }
        else if(a[i]%2==0 && b[i]%2!=0){
            if(c[i]>=10){
                flag=true;
            }
        }
        else if(a[i]%2!=0 && b[i]%2==0){
            if(b[i]>=10 || c[i]>=100){
                flag=true;
            }
        }
        else if(a[i]%2!=0 && b[i]%2!=0){
            if((b[i]>=10 && c[i]>=10) || c[i]>=100){
                flag=true;
            }
        }*/
        /*
        bool flag=true;
        if(a[i]%2!=0){
            if(b[i]<10 && c[i]<100){
                flag=false;
            }
            else if(b[i]<10 && c[i]>=100){
                c[i]-=100;
            }

            if(b[i]%2!=0){
                if(c[i]<10){
                    flag=false;
                }
            }
        }
        else{
            if(b[i]%2!=0){
                if(c[i]<10){
                    flag=false;
                }
            }
        }*/

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}