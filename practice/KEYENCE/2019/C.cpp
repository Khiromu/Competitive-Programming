#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[101010], b[101010];
ll cnta, cntb;
ll diff[101010];
int main(){
    cin>>n;
    REP(i, 0, n){
        cin>>a[i];
        cnta+=a[i];
    }
    REP(i, 0, n){
        cin>>b[i];
        cntb+=b[i];
    }

    REP(i, 0, n){
        diff[i]=a[i]-b[i];
    }

    sort(diff, diff+n);

    ll ans=0, sum=0;
    if(cnta<cntb){
        cout<<-1<<endl;
    }
    else{
        REP(i, 0, n){
            if(diff[i]>=0) break;
            ans++;
            sum+=diff[i];
        }
        RREP(i, 0, n){
            if(sum>=0) break;
            ans++;
            sum+=diff[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}