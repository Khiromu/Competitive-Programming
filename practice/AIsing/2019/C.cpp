#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll h, w;
string s[401];
bool used[401][401];
ll dx[4]={0, 1, 0, -1};
ll dy[4]={1, 0, -1, 0};
int main(){
    cin>>h>>w;
    REP(i, 0, h) cin>>s[i];

    ll ans=0;
    REP(i, 0, h){
        REP(j, 0, w){
            if(s[i][j]=='#' && !used[i][j]){
                ll black=1;
                ll cnt=0;
                used[i][j]=true;

                queue<pair<pair<ll, ll>, ll>> que;
                que.push(make_pair(make_pair(i, j), true));
                while(!que.empty()){
                    pair<pair<ll, ll>, ll> cur=que.front();
                    que.pop();
                    REP(k, 0, 4){
                        ll ny=cur.first.first+dy[k];
                        ll nx=cur.first.second+dx[k];
                        if(ny<0 || ny>=h || nx<0 || nx>=w) continue;
                        if(used[ny][nx]) continue;

                        if(cur.second){ // is black
                            if(s[ny][nx]=='.'){
                                cnt++;
                                used[ny][nx]=true;
                                que.push(make_pair(make_pair(ny, nx), false));
                            }
                        }
                        else{ // is white
                            if(s[ny][nx]=='#' && !used[ny][nx]){
                                black++;
                                used[ny][nx]=true;
                                que.push(make_pair(make_pair(ny, nx), true));
                            }
                        }
                    }
                }

                ans+=(cnt*black);
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}