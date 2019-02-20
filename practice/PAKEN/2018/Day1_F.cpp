#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;


int main(){
    ll n;
    ll a[101];
    ll sum=0;
    cin>>n;
    REP(i, 0, n){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a, a+n);

    if(sum%2!=0){
        REP(i, 0, n){
            if(a[i]%2!=0){
                sum-=a[i];
                break;
            }
        }
    }
    cout<<sum/2<<endl;
    return 0;
}