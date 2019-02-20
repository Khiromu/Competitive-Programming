#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll h[101];
int main() {
    cin>>n;
    REP(i, 0, n) cin>>h[i];

    ll cnt=0;
    ll l, r, mn;
    while(1){
        l=-1;
        REP(i, 0, n){
            if(h[i]!=0){
                l=i;
                break;
            }
        }

        if(l==-1){
            break;
        }
        mn=101;
        r=-1;
        REP(i, l, n){
            if(h[i]==0){
                r=i;
                break;
            }
            mn=min(mn, h[i]);
        }
        if(r==-1) r=n;

        REP(i, l, r){
            h[i]-=mn;
        }
        cnt+=mn;
    }

    cout<<cnt<<endl;
    return 0;
}