#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a <= n && n < b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll N, M, L;
string S[501];
ll cnt[30][30];
char T[30][30];
char ch[7]={'.', 'L', 'R', '.', 'D', 'T', '#'};
ll dx[4]={0, 1, 0, -1}; // up, right, down, left
ll dy[4]={-1, 0, 1, 0};
pair<ll, ll> simu(string s){
    //cout<<"str="<<s<<endl;
    ll dir=0; // 0:up, 1:right, 2:down, 3:left
    ll x=M/2;
    ll y=M/2;

    REP(i, 0, s.size()){
        char c=s[i];
        ll nx=x+dx[dir];
        ll ny=y+dy[dir];

        if(c=='S'){
            if(T[ny][nx]=='#') continue;

            x=nx;
            y=ny;
        }
        else if(c=='R'){
            if(T[y][x]=='L') dir=(4+dir-1)%4;
            else dir=(4+dir+1)%4;
        }
        else if(c=='L'){
            if(T[y][x]=='R') dir=(4+dir+1)%4;
            else dir=(4+dir-1)%4;
        }

        //cout<<y<<" "<<x<<" "<<dir<<endl;
    }

    pair<ll, ll> pr=make_pair(y, x);
    return pr;
}
ll get_score(){
    ll score=0;
    REP(i, 0, M){
        REP(j, 0, M){
            if(cnt[i][j]==1) score+=10;
            else if(cnt[i][j]==2) score+=3;
            else if(cnt[i][j]==3) score+=1;
        }
    }
    return score;
}
int main() {
    cin>>N>>M>>L;
    REP(i, 0, N) cin>>S[i];

    REP(i, 0, M){
        REP(j, 0, M){
            if(i==0 || j==0 || i==M-1 || j==M-1){
                T[i][j]='#';
            }
            else{
                //T[i][j]='.';
                T[i][j]=ch[rand()%4];
            }
        }
    }

    REP(i, 0, N){
        pair<ll, ll> pr=simu(S[i]);
        cnt[pr.first][pr.second]++;
        //cout<<pr.first<<" "<<pr.second<<endl;
    }

    ll score=get_score();
    cout<<score<<endl;

    REP(i, M/2-5, M/2+5){
        REP(j, M/2-5, M/2+5){
            char cur='X';
            REP(k, 0, 3){
                REP(l, 0, M){
                    REP(m , 0, M){
                        cnt[l][m]=0;
                        //tmp[l][m]=T[l][m];
                    }
                }

                if(T[i][j]==ch[k]) continue;
                T[i][j]=ch[k];

                REP(l, 0, N){
                    pair<ll, ll> pr=simu(S[l]);
                    cnt[pr.first][pr.second]++;
                }
                ll scr=get_score();
                if(scr>score){
                    score=scr;
                    cur=ch[k];
                }
            }

            if(cur!='X'){
                T[i][j]=cur;
            }
        }
    }
    cout<<score<<endl;

//    REP(i, 0, M){
//        cout<<T[i]<<endl;
//    }

    ofstream outputfile("output211.txt");
    REP(i, 0, M){
        outputfile<<T[i]<<endl;
    }
    outputfile.close();
    return 0;
}