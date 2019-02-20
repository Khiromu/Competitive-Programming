#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s;
ll get2525(string str){
    ll ans=0, sum=0;
    ll idx=0;

    while(idx+1<str.size()){
        if(str[idx]=='2' && str[idx+1]=='5'){
            sum+=2;
            idx+=2;
        }
        else{
            ans=max(ans, sum);
            sum=0;
            idx++;
        }
    }
    return max(ans, sum);
}
int main() {
    cin>>s;

    ll ans=0;
    ll idx=0;
    string even=s, odd=s;
    REP(i, 0, s.size()){
        if(s[i]=='?' && i%2!=0){
            even[i]='2';
            odd[i]='5';
        }
        else if(s[i]=='?' && i%2==0){
            even[i]='5';
            odd[i]='2';
        }
    }

    cout<<max(get2525(even), get2525(odd))<<endl;
    return 0;
}