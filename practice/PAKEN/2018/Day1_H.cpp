#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
unordered_map<ll, ll> a, b;
int main(){
    cin>>n>>m;
    REP(i, 0, n){
        ll tmp;
        cin>>tmp;
        a[tmp]++;
    }
    REP(i, 0, m){
        ll tmp;
        cin>>tmp;
        b[tmp]++;
    }

    ll sum=0;
    for(auto itra : a){
        for(auto itrb : b){
            sum+=(itra.first*itra.second*itrb.first*itrb.second);
        }
    }
    cout<<sum<<endl;
    return 0;
}