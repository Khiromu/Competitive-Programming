#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, T;
vector<ll> v;
int main() {
    cin>>n>>T;
    REP(i, 0, n){
        ll c, t;
        cin>>c>>t;
        if(t<=T){
            v.emplace_back(c);
        }
    }

    if(v.size()==0){
        cout<<"TLE"<<endl;
    }
    else{
        sort(v.begin(), v.end());
        cout<<v[0]<<endl;
    }

    return 0;
}