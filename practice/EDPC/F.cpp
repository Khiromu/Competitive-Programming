#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s, t;
pair<int, string> dp[3030][3030];
string itostr4(ll idx){
    string s="";
    while(idx>0){
        s=to_string(idx%10)+s;
        idx/=10;
    }
    while(s.size()<4){
        s="0"+s;
    }
    return s;
}
int main(){
    cin>>s>>t;

    REP(i, 0, s.size()){
        REP(j, 0, t.size()){
            if(s[i] == t[j]){
                dp[i+1][j+1].first = dp[i][j].first+1;
                if(dp[i][j].second.size()==0){
                    dp[i+1][j+1].second = string(1, s[i]);
                }
                else if(dp[i][j].second[0]=='!'){
                    dp[i+1][j+1].second = dp[stoi(dp[i][j].second.substr(1, 4))][stoi(dp[i][j].second.substr(5))].second+string(1, s[i]);
                }
                else{
                    dp[i+1][j+1].second = dp[i][j].second+string(1, s[i]);
                }
                //dp[i+1][j+1].second = dp[i][j].second+string(1, s[i]);
            }
            else{
                if(dp[i+1][j].first > dp[i][j+1].first){
                    dp[i+1][j+1].first = dp[i+1][j].first;
                    if(dp[i+1][j].second.size()!=0 && dp[i+1][j].second[0]=='!'){
                        dp[i+1][j+1].second = dp[i+1][j].second;
                    }
                    else if(dp[i+1][j].second.size()!=0){
                        dp[i+1][j+1].second = "!" + itostr4(i) + itostr4(j);
                    }
                    //dp[i+1][j+1].second =dp[i+1][j].second;
                }
                else{
                    dp[i+1][j+1].first = dp[i][j+1].first;
                    if(dp[i][j+1].second.size()!=0 && dp[i][j+1].second[0]=='!'){
                        dp[i+1][j+1].second = dp[i][j+1].second;
                    }
                    else if(dp[i][j+1].second.size()!=0){
                        dp[i+1][j+1].second = "!" + itostr4(i) + itostr4(j);
                    }
                    //dp[i+1][j+1].second =dp[i][j+1].second;
                }
            }
        }
    }

    REP(i, 0, s.size()+1){
        REP(j, 0, t.size()+1){
            cout<<dp[i][j].second<<" ";
        }
        cout<<endl;
    }

    if(dp[s.size()][t.size()].second[0]=='!'){
        cout<<dp[stoi(dp[s.size()][t.size()].second.substr(1, 4))][stoi(dp[s.size()][t.size()].second.substr(5))].second<<endl;
    }
    else{
        cout<<dp[s.size()][t.size()].second<<endl;
    }
    return 0;
}