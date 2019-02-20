#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

/*
 * Ciが負の場合?
 *
 */
ll n;
ll sum[101010];
int main(){
    cin>>n;
    REP(i, 0, n-1){
        ll c;
        cin>>c;
        sum[i+1]=sum[i]+c;
    }

    REP(i, 0, n){
        cout<<max(abs(sum[0]-sum[i]), abs(sum[i]-sum[n-1]))<<endl;
    }
    return 0;
}