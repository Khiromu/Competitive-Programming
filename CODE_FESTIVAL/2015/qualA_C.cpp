#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n,  t;
ll diff[101010];
ll sum;
int main() {
    cin>>n>>t;
    REP(i, 0, n){
        ll a, b;
        cin>>a>>b;
        sum+=b;
        diff[i]=a-b;
    }

    if(sum>t){
        cout<<-1<<endl;
        return 0;
    }

    ll cnt=0;
    sort(diff, diff+n);
    REP(i, 0, n){
        sum+=diff[i];
        if(sum>t){
            break;
        }
        cnt++;
    }

    cout<<n-cnt<<endl;
    return 0;
}