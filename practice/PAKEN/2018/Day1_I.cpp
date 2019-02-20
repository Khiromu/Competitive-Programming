#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[101010], b[101010];
ll ans;
/*
bool goLeft(ll mid){
    ll left=0, right=0;
    ll cnt=0; // 点灯できる電球の数
    REP(i, 0, n){
        if(a[i]<=mid && mid<=b[i]) cnt++;
        else if(a[i]<=mid && b[i]<=mid) left++;
        else right++;
    }
    ans=max(ans, cnt);

    if(right<=left) return true;
    else return false;
}*/

map<ll, ll> mp; // value, count
int main(){
    cin>>n;
    REP(i, 0, n){
        ll aa, bb;
        cin>>aa>>bb;

        mp[aa]++;
        mp[bb+1]--;
    }

    ll cnt=0;
    for(auto itr:mp){
        cnt+=itr.second;
        ans=max(ans, cnt);
    }

    /* binary search
    REP(i, 0, n) cin>>a[i]>>b[i];

    ans=0;
    ll lb=0, ub=inf;
    while(ub-lb>1){
        ll mid=(lb+ub)/2;
        if(goLeft(mid)) ub=mid;
        else lb=mid;
    }

    ll cnt=0;
    REP(i, 0, n){
        if(a[i]<=lb && lb<=b[i]) cnt++;
    }
    ans=max(ans, cnt);

    cnt=0;
    REP(i, 0, n){
        if(a[i]<=ub && ub<=b[i]) cnt++;
    }
    ans=max(ans, cnt);
    */

    cout<<ans<<endl;

    return 0;
}