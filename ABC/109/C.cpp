#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll gcd(ll a, ll b) {
    if(a<b){
        int tmp=a;
        a=b;
        b=tmp;
    }

    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    ll N, X;
    ll x[100001];
    cin>>N>>X;
    REP(i, 0, N) cin>>x[i];

    sort(x, x+N);
    ll ans=abs(X-x[0]);
    REP(i, 0, N-1){
        ans=gcd(x[i+1]-x[i], ans);
    }
    cout<<ans<<endl;
    return 0;
}