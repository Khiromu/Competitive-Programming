#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll d, g;
ll p[11], c[11];
int main() {
    cin>>d>>g;
    REP(i, 0, d) cin>>p[i]>>c[i];

    vector<ll> v(d);
    ll ans=inf;
    iota(v.begin(), v.end(), 0);
    do{
        ll cnt=0, sum=0;
        for(auto x : v){
            if(sum + 100*(x+1)*p[x] + c[x] >= g){
                if(sum + 100*(x+1)*(p[x]-1) >= g){
                    ll tmp=(g-sum + 100*(x+1) - 1)/(100*(x+1));
                    ans=min(ans, cnt+tmp);
                }
                else{
                    ans=min(ans, cnt+p[x]);
                }
                break;
            }
            else{
                sum+=100*(x+1)*p[x] + c[x];
                cnt+=p[x];
            }
        }
    } while(next_permutation(v.begin(), v.end()));

    cout<<ans<<endl;
    return 0;
}