#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, k;
ll cnt1, cnt2;
int main() {
    cin>>n>>k;

    REP(i, 1, n+1){
        if(i%k==0) cnt1++;
    }

    if(k%2==0){
        REP(i, 1, n+1){
            if(i%k==(k/2)) cnt2++;
        }
    }

    cout<<pow(cnt1, 3)+pow(cnt2, 3)<<endl;
    return 0;
}