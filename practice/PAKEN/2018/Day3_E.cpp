#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll q;
ll a, b, x;
ll key[101];
ll cnt;
void dfs(ll idx, ll sum){
    if(sum==x){
        cnt++;
        return;
    }

    if(key[idx]<=0 || sum>x) return;

    dfs(idx+2, sum+key[idx]);
    dfs(idx+1, sum);
}
int main(){
    cin>>q;
    REP(i, 0, q){
        cin>>a>>b>>x;
        key[0]=a;
        key[1]=b;
        cnt=0;
        REP(i, 2, 88){
            key[i]=key[i-2]+key[i-1];
            if(key[i]>x){ // key[i] exceed x[i]
                break;
            }
        }

        dfs(0LL, 0LL);
        cout<<cnt<<endl;
    }
    return 0;
}