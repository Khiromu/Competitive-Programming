#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n;
char piece[1010][1010];
ll dx[4]={1, 0, -1, 0};
ll dy[4]={0, 1, 0, -1};
int main() {
    cin>>n;

    REP(i, 0, 1010){
        REP(j, 0, 1010){
            piece[i][j]='.';
        }
    }

    REP(i, 0, n){
        REP(j, 0, n){
            if(i%5==0 && j%5==0){
                piece[i][j]='X';
            }
            else if(i%5==2 && j%5==1){
                piece[i][j]='X';
            }
            else if(i%5==4 && j%5==2){
                piece[i][j]='X';
            }
            else if(i%5==1 && j%5==3){
                piece[i][j]='X';
            }
            else if(i%5==3 && j%5==4){
                piece[i][j]='X';
            }
            /*
            if(i%4==0 && j%4==0){
                piece[i][j]='X';
            }
            else if(i%4==2 && j%4==1){
                piece[i][j]='X';
            }
            else if(i%4==1 && j%4==2){
                piece[i][j]='X';
            }
            else if(i%4==3 && j%4==3){
                piece[i][j]='X';
            }
            */
        }
    }

    REP(i, 0, n){
        REP(j, 0, n){
            if(piece[i][j]=='X') continue;

            bool flag=true;
            REP(k, 0, 4){
                ll ny=i+dy[k];
                ll nx=j+dx[k];

                if(ny<0 || ny>=n || nx<0 || nx>=n) continue;

                if(piece[ny][nx]=='X'){
                    flag=false;
                    break;
                }
            }

            if(flag) piece[i][j]='X';
        }
    }

    REP(i, 0, n){
        REP(j, 0, n){
            cout<<piece[i][j];
        }
        cout<<endl;
    }

    return 0;
}