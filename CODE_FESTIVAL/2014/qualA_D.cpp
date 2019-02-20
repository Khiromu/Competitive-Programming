#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string a;
ll K;
int main() {
    cin>>a>>K;

    if(a.size()==1){
        cout<<0<<endl;
        return 0;
    }

    // 左からi行目まではaと同じ
    // 左からi+1行目をjにする
    // 左からi+2行目以降をkにする
    ll mn=inf, lla=0;
    set<char> st;
    REP(i, 0, a.size()) lla=lla*10+(a[i]-'0');

    REP(i, 0, a.size()-1){
        if(st.size()>K) break;

        string str=a.substr(0, i);
        REP(j, 0, 10){
            set<char> stj=st;
            stj.insert('0'+j);
            if(stj.size()>K) continue;

            string strj=str;
            strj+=('0'+j);
            REP(k, 0, 10){
                set<char> stk=stj;
                stk.insert('0'+k);
                if(stk.size()>K) continue;

                string strk=strj;
                REP(l, 0, a.size()-i-1){
                    strk+=('0'+k);
                }

                ll llstrk=0;
                REP(l, 0, strk.size()) llstrk=llstrk*10+(strk[l]-'0');

                mn=min(mn, llabs(lla-llstrk));
            }
        }
        st.insert(a[i]);
    }
    cout<<mn<<endl;

    /*
    ll idx=0;
    while(idx<a.size() && k>=0){
        if(!num[a[idx]-'0']){
            if(k<=0) break;

            num[a[idx]-'0']=true;
            k--;
        }
        idx++;
    }

    if(idx>=a.size()){
        cout<<0<<endl;
    }
    else{
        vector<ll> v;
        REP(i, 0, 10){
            if(num[i]) v.push_back(i);
        }

        string str1=a.substr(idx);
        REP(i, 0, 10){
            if(!num[i]) continue;

            string str2="";
            REP(j, 0, str1.size()-1){
                str2+=(char)('0'+i);
            }
            REP(j, 0, 10){
                if(!num[j]) continue;

                cout<<"str1="<<str1<<endl;
                cout<<"str2="<<str2+(char)('0'+j)<<endl;
            }
        }
        //cout<<str1<<endl;
    }
    */

    /*
    cout<<"idx="<<idx<<endl;
    REP(i, 0, 10){
        cout<<"i="<<num[i]<<endl;
    }*/
    return 0;
}