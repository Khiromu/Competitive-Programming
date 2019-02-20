#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
ll a[100001];
ll count(int x){//count less than x
    int j=0,sum=0;
    ll res=0;
    for(int i=0;i<n;++i){
        while(j<n && sum<1){
            if(a[j]<x) ++sum;
            ++j;
        }
        if(sum==1) res+=n-j+1;
        if(a[i]<x){
            --sum;
        }
    }
    return res;
}
int main() {
    cin>>n;
    REP(i, 0, n) cin>>a[i];

    int lb=0,ub=n+1;
    while(ub-lb>1){
        int md=(lb+ub)>>1;
        if(count(md) > (n*(n+1)/2)) ub=md;
        else lb=md;
    }
    cout<<lb<<endl;


    return 0;
}