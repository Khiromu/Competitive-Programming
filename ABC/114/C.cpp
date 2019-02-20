#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int n;
int ans, cnt;
void dfs(int digit, string str){
    if(digit<=cnt){
        if(stoi(str)<=n){
            bool ck[3];
            REP(i, 0, 3) ck[i]=false;
            REP(i, 0, str.size()){
                if(str[i]=='7') ck[0]=true;
                else if(str[i]=='5') ck[1]=true;
                else ck[2]=true;
            }

            if(ck[0] && ck[1] && ck[2]) ans++;
        }

        dfs(digit+1, str+"7");
        dfs(digit+1, str+"5");
        dfs(digit+1, str+"3");
    }
    return;
}
int main() {
    cin>>n;

    int tmp=n;
    while(tmp>0){
        tmp/=10;
        cnt++;
    }

    dfs(1, "7");
    dfs(1, "5");
    dfs(1, "3");

    cout<<ans<<endl;
    return 0;
}