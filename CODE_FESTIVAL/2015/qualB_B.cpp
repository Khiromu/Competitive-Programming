#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll cnt[101010];
int main() {
    cin>>n>>m;
    REP(i, 0, n){
        ll a;
        cin>>a;
        cnt[a]++;
    }

    ll ans=-1;
    bool decide=false;
    REP(i, 0, m+1){
        if(!decide && cnt[i]>n/2){
            ans=i;
            decide=true;
        }
        else if(decide && cnt[i]>n/2){
            ans=-1;
            decide=false;
            break;
        }
    }
    if(decide) cout<<ans<<endl;
    else cout<<"?"<<endl;
    return 0;
}