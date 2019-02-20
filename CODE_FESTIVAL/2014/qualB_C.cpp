#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
#define CK(n, a, b) (a<=n && n<b)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

string s1, s2, s3;
ll alp1[26], alp2[26], alp3[26];
int main() {
    cin>>s1>>s2>>s3;

    REP(i, 0, s1.size()){
        alp1[s1[i]-'A']++;
        alp2[s2[i]-'A']++;
        alp3[s3[i]-'A']++;
    }

    //ll cnt1=0, cnt2=0;

    ll mn=0, mx=0;
    REP(i, 0, 26){
        mn+=max((ll)0, alp3[i]-alp2[i]);
        mx+=min(alp1[i], alp3[i]);
    }
    if(mn<=(s1.size()/2) && mx>=(s1.size()/2)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    //cout<<"mn="<<mn<<endl;
    //cout<<"mx="<<mx<<endl;

    /*
    REP(i, 0, 26){
        if(alp3[i]>0){
            if(alp1[i]==0 && alp2[i]>0){
                cnt2+=alp2[i];
                alp2[i]=alp3[i]=0;
            }
            else if(alp1[i]>0 && alp2[i]==0){
                cnt1+=alp1[i];
                alp1[i]=alp3[i]==0;
            }
        }
    }

    bool flag=true;
    REP(i, 0, 26){
        if(alp3[i]>(alp1[i]+alp2[i])){
            flag=false;
            break;
        }
    }
    cout<<"flag="<<flag<<endl;

    REP(i, 0, 26){
        if(alp3[i]>0){
            if(alp3[i]>(2*min(alp1[i], alp2[i]))){
                if(alp1[i]<alp2[i]){
                    cnt2+=(alp3[i]-2*min(alp1[i], alp2[i]));
                }
                else{
                    cnt1+=(alp3[i]-2*min(alp1[i], alp2[i]));
                }
            }
        }
    }

    cout<<"cnt1="<<cnt1<<endl;
    cout<<"cnt2="<<cnt2<<endl;

    if(cnt1>(s1.size()/2) || cnt2>(s1.size()/2)) flag=false;

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    */
    return 0;
}