#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[101010];
ll cnt[4];
int main() {
    cin>>n;
    REP(i, 0, n){
        cin>>a[i];
        cnt[a[i]-1]++;
    }

    ll ans=cnt[3];
    ans+=(cnt[1]/2);
    if(cnt[0]<cnt[2]){
        ans+=cnt[2];
        if(cnt[1]%2==1) ans++;
    }
    else{
        ans+=cnt[2];
        cnt[0]-=cnt[2];
        if(cnt[1]%2==1){
            ans++;
            if(cnt[0]>1) cnt[0]-=2;
            else cnt[0]=0;
        }
        ans+=((cnt[0]+4-1)/4);
    }

    cout<<ans<<endl;
    return 0;
}