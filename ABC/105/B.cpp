#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
int flag[110];

void dfs(int n){
    if(n>100) return;
    flag[n]=true;
    dfs(n+4);
    dfs(n+7);
}
int main() {
    cin>>n;

    dfs(4);
    dfs(7);

    if(flag[n]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}