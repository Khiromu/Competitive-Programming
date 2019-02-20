#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll a[51][51];
int main(){
    cin>>n>>m;
    REP(i, 0, n) REP(j, 0, n) cin>>a[i][j];

    REP(i, 0, n){
        REP(j, 0, n){
            if(a[i][j]>=4) continue;
            if(m<=0) return 0;

            REP(k, 0, 4-a[i][j]){
                cout<<1<<" "<<i<<" "<<j<<endl;
                m--;
            }
            a[i][j]=4;
        }
    }

    for(ll i=1; i<n-1; i+=2){
        for(ll j=1; j<n-1; j+=2){
            REP(k, -1, 2){
                REP(l, -1, 2){
                    if(m<=0) return 0;

                    if(a[i+k][j+l]==4){
                        cout<<2<<" "<<i+k<<" "<<j+l<<endl;
                        m--;
                        break;
                    }
                }
            }
        }
    }

    random_device rnd;
    while(m>0){
        cout<<2<<" "<<rnd()%n<<" "<<rnd()%n<<endl;
        m--;
    }
    return 0;
}