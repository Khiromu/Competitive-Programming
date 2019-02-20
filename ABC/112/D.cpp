#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
int main() {
    cin>>n>>m;

    vector<ll> divisor;
    for(ll i=1; i*i<=m; i++){
        if(m%i==0){
            divisor.emplace_back(i);
            divisor.emplace_back(m/i);
        }
    }
    sort(divisor.begin(), divisor.end());

    RREP(i, 0, divisor.size()){
        if(divisor[i] <= m/n){
            cout<<divisor[i]<<endl;
            break;
        }
    }
    return 0;
}