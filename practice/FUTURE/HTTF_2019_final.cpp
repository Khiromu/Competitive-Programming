#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a <= n && n < b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll T, N, M;
ll A[30010], B[30010], C[30010];
ll S[30010][11];
vector<string> vs;
vector<vector<ll>> vv(1001);  // B[i], i
ll get_reward(ll t, ll i, ll SkillLevel[]){
    ll Money;
    double AddMoney = C[i];

    AddMoney *= (1 + 9 * (double)(t - A[i]) / (B[i] - A[i]));
    int SkillLack = 0;
    for (int j = 0; j < N; j++) SkillLack += max((ll)0, S[i][j] - SkillLevel[j]);

    if (SkillLack == 0) AddMoney *= 10;
    else {
        AddMoney *= pow(0.5, SkillLack);
        AddMoney += 1e-9;
    }
    Money += (long long)AddMoney;

    return Money;
}
int main() {
    cin>>T>>N>>M;
    REP(i, 0, M){
        cin>>A[i]>>B[i]>>C[i];
        vv[B[i]].emplace_back(i);
        REP(j, 0, N) cin>>S[i][j];
    }
    REP(i, 0, T) vs.emplace_back("3");

    ll mx=1001000;
    ll skill[11];
    REP(i, 0, 11) skill[i]=0;

    // no skill
    ll sm=0;
    vector<string> str;
    REP(j, 1, T+1){
        if(vv[j].size()<=0){
            str.emplace_back("3");
        }
        else{
            ll mx_reward=0;
            ll idx;
            REP(k, 0, vv[j].size()){
                ll cur_reward=get_reward(j, vv[j][k], skill);
                if(mx_reward<cur_reward){
                    mx_reward=cur_reward;
                    idx=vv[j][k];
                }
            }
            sm+=mx_reward;
            if(mx_reward<=1000){
                str.emplace_back("3");
            }
            else{
                str.emplace_back("2 " + to_string(idx));
            }
        }
    }
    if(mx<sm){
        vs.clear();
        REP(j, 0, str.size()){
            vs.emplace_back(str[j]);
        }
        mx=sm;
    }

    // one skill get
    REP(i, 0, N){
        ll sum=0;
        vector<string> s;
        REP(j, 0, 19) s.emplace_back("3");
        s.emplace_back("1 " + to_string(1+i));

        REP(j, 0, N){
            if(i==j) skill[j]=1;
            else skill[j]=0;
        }

        REP(j, 21, T+1){
            if(vv[j].size()<=0){
                s.emplace_back("3");
            }
            else{
                ll mx_reward=0;
                ll idx;
                REP(k, 0, vv[j].size()){
                    ll cur_reward=get_reward(j, vv[j][k], skill);
                    if(mx_reward<cur_reward){
                        mx_reward=cur_reward;
                        idx=vv[j][k];
                    }
                }
                sum+=mx_reward;
                if(mx_reward<=1000){
                    s.emplace_back("3");
                }
                else{
                    s.emplace_back("2 " + to_string(idx));
                }
            }
        }

        if(mx<sum){
            vs.clear();
            REP(j, 0, s.size()){
                vs.emplace_back(s[j]);
            }
            mx=sum;
        }
    }

    // 10 skill
    REP(i, 0, 11) skill[i]=1;
    sm=0;
    str.clear();
    REP(i, 0, 199) str.emplace_back("3");
    REP(i, 0, 10) str.emplace_back("1 " + to_string(1+i));

    REP(j, 210, T+1){
        if(vv[j].size()<=0){
            str.emplace_back("3");
        }
        else{
            ll mx_reward=0;
            ll idx;
            REP(k, 0, vv[j].size()){
                ll cur_reward=get_reward(j, vv[j][k], skill);
                if(mx_reward<cur_reward){
                    mx_reward=cur_reward;
                    idx=vv[j][k];
                }
            }
            sm+=mx_reward;
            if(mx_reward<=1000){
                str.emplace_back("3");
            }
            else{
                str.emplace_back("2 " + to_string(idx));
            }
        }
    }
    if(mx<sm){
        vs.clear();
        REP(j, 0, str.size()){
            vs.emplace_back(str[j]);
        }
    }

    REP(i, 0, vs.size()){
        cout<<vs[i]<<endl;
    }

//    REP(i, 0, 5){
//        REP(j, 0, vv[i].size()){
//            cout<<vv[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    //REP(i, 0, T) cout<<3<<endl;

//    ofstream outputfile("output211.txt");
//    REP(i, 0, M){
//        outputfile<<T[i]<<endl;
//    }
//    outputfile.close();
    return 0;
}