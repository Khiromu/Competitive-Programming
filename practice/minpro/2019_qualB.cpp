#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int cnt[4];
int main(){
    REP(i, 0, 3){
        int a, b;
        cin>>a>>b;
        cnt[a-1]++;
        cnt[b-1]++;
    }

    if((cnt[0]==1 && cnt[1]==1 && cnt[2]==2 && cnt[3]==2) ||
       (cnt[0]==1 && cnt[1]==2 && cnt[2]==2 && cnt[3]==1) ||
       (cnt[0]==2 && cnt[1]==2 && cnt[2]==1 && cnt[3]==1) ||
       (cnt[0]==2 && cnt[1]==1 && cnt[2]==1 && cnt[3]==2)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}