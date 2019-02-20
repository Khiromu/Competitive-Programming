#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll a, b;
bool judge_uruu(ll n){
    if(n%4==0){
        if(n%100!=0) return true;
        else{
            if(n%400==0) return true;
        }
    }
    return false;
}
int main() {
    cin>>a>>b;

    ll cnt2000=0, cnta=0, cntb=0;
    REP(i, 1, 2001){
        if(judge_uruu(i)) cnt2000++;
    }

    cntb=b/2000*cnt2000;
    REP(i, 1, b%2000+1){
        if(judge_uruu(i)) cntb++;
    }

    cnta=a/2000*cnt2000;
    REP(i, 1, a%2000){
        if(judge_uruu(i)) cnta++;
    }

    cout<<cntb-cnta<<endl;
    return 0;
}