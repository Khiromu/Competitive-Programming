#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll y, m, d;
int main(){
    cin>>y>>m>>d;

    if(m!=12 || d!=25) cout<<"NOT CHRISTMAS DAY"<<endl;
    else cout<<y-2018<<endl;
    return 0;
}