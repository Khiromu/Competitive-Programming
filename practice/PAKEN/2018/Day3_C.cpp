#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll b;
ll cnt;
int main(){
    cin>>b;

    REP(i, 2, b){
       ll a=i;
       while(a<b){
           a=(a*3/2);
       }

       if(a==b) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}