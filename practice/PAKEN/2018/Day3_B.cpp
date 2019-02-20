#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[10101];
ll sum, cnt;
int main(){
    cin>>n;
    REP(i, 0, n){
        cin>>a[i];
        sum+=a[i];

        if(sum<=2018) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}