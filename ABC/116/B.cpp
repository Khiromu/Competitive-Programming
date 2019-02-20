#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll s;
set<ll> st;
int main() {
    cin>>s;

    st.insert(s);
    REP(i, 1, 1010101){
        if(s%2==0) s/=2;
        else s=3*s+1;
        st.insert(s);

        if(st.size()==i){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}