#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll N, M, Q;
ll sum[501][501];

void CumulativeSum2() {
    for (ll i = 0; i < N+1; i++) {
        for (ll j = 1; j < N+1; j++) {
            sum[i][j] += sum[i][j - 1];
        }
    }
    for (ll j = 0; j < N+1; j++) {
        for (ll i = 1; i < N+1; i++) {
            sum[i][j] += sum[i - 1][j];
        }
    }
}

ll getSum2(ll x1, ll y1, ll x2, ll y2) {
    if (x1 == 0 && y1 == 0) return sum[y2][x2];
    else if (x1 == 0) return sum[y2][x2] - sum[y1 - 1][x2];
    else if (y1 == 0) return sum[y2][x2] - sum[y2][x1 - 1];
    else return sum[y2][x2] - sum[y1 - 1][x2] - sum[y2][x1 - 1] + sum[y1 - 1][x1 - 1];
}

int main() {
    cin>>N>>M>>Q;

    //vector<vector<int>> vvi(N);
    REP(i, 0, M){
        ll l, r;
        cin>>l>>r;
        sum[r][l]++;
    }
    CumulativeSum2();
    /*
    REP(i, 0, N){
        REP(j, 0, N){
            sum[i+1][j+1]+=sum[i+1][j];
        }
    }
    REP(j, 0, N){
        REP(i, 0, N){
            sum[i+1][j+1]+=sum[i][j+1];
        }
    }*/

    REP(i, 0, Q){
        ll p, q;
        cin>>p>>q;
        cout<<getSum2(p, p, q, q)<<endl;
    }

    return 0;
}