#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a, b;
int main() {
    cin>>n;
    if(n==1){
        cout<<"Hello World"<<endl;
    }
    else{
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}