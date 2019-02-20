#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m, q;
string s;
char d[150015], f[150015];
char ans[150015];
vector<pair<pair<ll, ll>, ll>> vpp; // <<ti, pi>, idx>
int main(){
    cin>>n>>s>>m;
    REP(i, 0, m) cin>>d[i]>>f[i];
    cin>>q;
    REP(i, 0, q){
        ll t, p;
        cin>>t>>p;
        vpp.emplace_back(make_pair(make_pair(t, p), i));
    }

    deque<pair<pair<ll, ll>, char>> deq; // <<left, right>, W or B>
    ll left=0, idx=1;
    bool blk;
    if(s[0]=='B') blk=true;
    else blk=false;
    while(idx<n){
        if(blk && s[idx]=='B'){
            idx++;
        }
        else if(!blk && s[idx]=='W'){
            idx++;
        }
        else{
            if(blk) deq.emplace_back(make_pair(make_pair(left, idx-1), 'B'));
            else deq.emplace_back(make_pair(make_pair(left, idx-1), 'W'));
            left=idx;
            blk=!blk;
            idx++;
        }
    }
    if(blk) deq.emplace_back(make_pair(make_pair(left, idx-1), 'B'));
    else deq.emplace_back(make_pair(make_pair(left, idx-1), 'W'));

    sort(vpp.begin(), vpp.end());

    ll tcnt=0;
    REP(i, 0, m){
        cout<<"i="<<i<<endl;
        if(d[i]=='R'){
            pair<pair<ll, ll>, char> next, back=deq.back();
            if((f[i]=='B' && back.second=='B') || (f[i]=='W' && back.second=='W')){
                deq.pop_back();
                deq.emplace_back(make_pair(make_pair(back.first.first, back.first.second+1), f[i]));
            }
            else{
                if(deq.size()<2){
                    deq.emplace_back(make_pair(make_pair(back.first.second+1, back.first.second+1), f[i]));
                }
                else{
                    deq.pop_back();
                    pair<pair<ll, ll>, char> bback=deq.back();
                    deq.pop_back();
                    deq.emplace_back(make_pair(make_pair(bback.first.first, back.first.second+1), f[i]));
                }
            }
        }
        else{
            pair<pair<ll, ll>, char> next, front=deq.front();
            if((f[i]=='B' && front.second=='B') || (f[i]=='W' && front.second=='W')){
                deq.pop_front();
                deq.emplace_front(make_pair(make_pair(front.first.first-1, front.first.second), f[i]));
            }
            else{
                if(deq.size()<2){
                    deq.emplace_front(make_pair(make_pair(front.first.first-1, front.first.first-1), f[i]));
                }
                else{
                    deq.pop_front();
                    pair<pair<ll, ll>, char> ffront=deq.front();
                    deq.pop_front();
                    deq.emplace_front(make_pair(make_pair(front.first.first-1, ffront.first.second), f[i]));
                }
            }
        }
        for(auto itr = deq.begin(); itr != deq.end(); ++itr) {
            cout<<itr->first.first<<" "<<itr->first.second<<" "<<itr->second<<endl;
        }

        while(tcnt<q && vpp[tcnt].first.first<=i+1){
            ll sum=0;
            for(auto itr = deq.begin(); itr != deq.end(); ++itr){
                if(itr->first.first<0 && itr->first.second>=0){
                    sum+=(abs(itr->first.first)+itr->first.second+1);
                }
                else{
                    sum+=abs(itr->first.first-itr->first.second)+1;
                }
                cout<<"sum="<<sum<<endl;
                cout<<"pi="<<vpp[tcnt].first.second<<endl;
                if(sum>=vpp[tcnt].first.second){
                    ans[vpp[tcnt].second]=itr->second;
                }
            }
            tcnt++;
        }
    }

    REP(i, 0, q){
        cout<<ans[i]<<endl;
    }


//    for(auto itr : vpp){
//        cout<<itr.first.first<<" "<<itr.first.second<<" "<<itr.second<<endl;
//    }
//    for(auto itr = deq.begin(); itr != deq.end(); ++itr) {
//        cout<<itr->first.first<<" "<<itr->first.second<<" "<<itr->second<<endl;
//    }


    return 0;
}