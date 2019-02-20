#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
string s;
int main(){
    cin>>n>>s;

    double ans=0.0;
    ll mx=0, ice;
    REP(i, 0, n){
        if(s[i]=='-') ice=0;
        else{
            ice++;
            mx=max(mx, ice);
        }
    }

    bool used=false;
    REP(i, 0, n){
        if(s[i]=='-'){
            if(!used && mx==0){
                ans+=((double)1/2);
                used=true;
            }
            else{
                ans+=1.0;
                ice=0;
            }
        }
        else{
            ans+=((double)1/(ice+2));
            ice++;

            if(!used && ice==mx){
                ans+=((double)1/(ice+2));
                used=true;
                i++;
            }
        }
    }

    printf("%.9lf\n", ans);
    return 0;
}