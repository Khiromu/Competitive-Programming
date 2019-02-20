#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
double a[101];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    double avr=0.0;
    REP(i, 0, n) avr+=a[i];
    avr/=n;

    double dif=1000000000.0;
    ll idx;
    RREP(i, 0, n){
        if(abs(avr-a[i])<=dif){
            dif=abs(avr-a[i]);
            idx=i;
        }
    }
    cout<<idx<<endl;
    return 0;
}