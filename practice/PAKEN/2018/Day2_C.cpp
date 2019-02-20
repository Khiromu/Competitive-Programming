#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[2020];
int main(){
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    REP(i, 1, n+1){ // cycle
        bool flag=true;
        REP(j, 0, i){
            ll idx=j;
            set<ll> st;
            while(idx<n){
                st.insert(a[idx]);
                idx+=i;
            }

            if(!(st.size()==1 || (st.size()==2 && st.count(0)==1))){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i<<endl;
            break;
        }

        /*
        vector<ll> v;
        REP(j, 0, i) v.emplace_back(a[i]);

        ll idx=0;
        bool flag=true;
        REP(j, i, n){
            if(a[j]!=0 && a[j]!=v[idx]){
                flag=false;
                break;
            }
            idx=(idx+1)%i;
        }

        if(flag){
            cout<<i<<endl;
            break;
        }
         */
    }
    return 0;
}