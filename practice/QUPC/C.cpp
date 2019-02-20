#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(N, A, B) (A <= N && N < B)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;


ll h, w, x;
ll dx[4]={1, 0, -1, 0};
ll dy[4]={0, 1, 0, -1};
ll sy, sx, gy, gx;
string s[1010];
ll field[1010][1010];
ll boar[1010][1010];
vector<pair<ll, ll>> vp;
int main() {
    cin>>h>>w>>x;
    REP(i, 0, h) cin>>s[i];

    REP(i, 0, h){
        REP(j, 0, w){
            if(s[i][j]=='S'){
                sy=i;
                sx=j;
            }
            else if(s[i][j]=='G'){
                gy=i;
                gx=j;
            }

            if(s[i][j]!='@') boar[i][j]=-1;
            else vp.push_back(make_pair(i, j));

            if(s[i][j]!='S') field[i][j]=-1;
        }
    }

//    REP(i, 0, h){
//        REP(j, 0, w){
//            cout<<s[i][j];
//        }
//        cout<<endl;
//    }
    cout<<"field"<<endl;
    REP(i, 0, h){
        REP(j, 0, w){
            cout<<field[i][j];
        }
        cout<<endl;
    }
    cout<<"boar"<<endl;
    REP(i, 0, h){
        REP(j, 0, w){
            cout<<boar[i][j];
        }
        cout<<endl;
    }
    REP(i, 0, vp.size()){
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    REP(i, 0, vp.size()){
        ll cy=vp[i].first;
        ll cx=vp[i].second;

        queue<pair<ll, ll>> q;
        q.push(make_pair(cy, cx));

        while(!q.empty()){
            pair<ll, ll> p=q.front();
            q.pop();

            if(boar[p.first][p.second]>=x) continue;

            REP(k, 0, 4){
                ll ny=p.first+dy[k];
                ll nx=p.second+dx[k];
                if(!CK(ny, 0, h) || !CK(nx, 0, w)) continue;
                if(s[ny][nx]=='G'){
                    cout<<-1<<endl;
                    return 0;
                }
                if(boar[ny][nx]==-1 && s[ny][nx]=='.'){
                    boar[ny][nx]=boar[p.first][p.second]+1;
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }
    cout<<"boar"<<endl;
    REP(i, 0, h){
        REP(j, 0, w){
            cout<<boar[i][j];
        }
        cout<<endl;
    }
    return 0;
    /*
    REP(i, 0, h){
        REP(j, 0, w){
            if(s[i][j]!='@') continue;

            queue<pair<ll, ll>> q;
            q.push(make_pair(i, j));
            while(!q.empty()){
                pair<ll, ll> p=q.front();
                q.pop();

                if(boar[p.first][p.second]>=x) continue;

                REP(k, 0, 4){
                    ll ny=p.first+dy[k];
                    ll nx=p.second+dx[k];
                    if(!CK(ny, 0, h) || !CK(nx, 0, w)) continue;
                    if(s[ny][nx]=='G'){
                        cout<<-1<<endl;
                        return 0;
                    }
                    if(boar[ny][nx]==-1 && s[ny][nx]!='.') continue;

                    boar[ny][nx]=boar[p.first][p.second]+1;
                    q.push(make_pair(ny, nx));
                }
            }
        }
    }*/

//    cout<<"field"<<endl;
//    REP(i, 0, h){
//        REP(j, 0, w){
//            cout<<field[i][j];
//        }
//        cout<<endl;
//    }
//    cout<<"s"<<endl;
//    REP(i, 0, h){
//        REP(j, 0, w){
//            cout<<s[i][j];
//        }
//        cout<<endl;
//    }

    //cout<<"  "<<endl;

    queue<pair<ll, ll>> q;
    q.push(make_pair(sy, sx));
    while (!q.empty()){
        pair<ll, ll> p=q.front();
        q.pop();

        REP(k, 0, 4){
            ll ny=p.first+dy[k];
            ll nx=p.second+dx[k];
            if(!CK(ny, 0, h) || !CK(nx, 0, w)) continue;
            if(!(s[ny][nx]=='.' || s[ny][nx]=='G')) continue;
            if(field[ny][nx]!=-1) continue;
            if(boar[ny][nx]!=-1) continue;

            field[ny][nx]=field[p.first][p.second]+1;
            //cout<<ny<<" "<<nx<<" "<<s[ny][nx]<<endl;
            //cout<<field[ny][nx]<<endl;
            q.push(make_pair(ny, nx));
        }
    }
    cout<<field[gy][gx]<<endl;

    REP(i, 0, h){
        REP(j, 0, w){
            cout<<field[i][j];
        }
        cout<<endl;
    }
    return 0;
}