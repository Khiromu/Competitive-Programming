#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

ll n, m;
ll a[10];
ll dp[10101]; // ちょうどi本のマッチ棒を使って、条件を満たす整数を作るときの最大桁数
ll num[10]={inf, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // 整数iを作るために使うマッチの本数
int main() {
    cin >> n >> m;
    REP(i, 0, m) cin >> a[i];

    sort(a, a + m);
    dp[0] = 0;
    REP(i, 1, 10101) dp[i] = -inf;
    REP(i, 1, n + 1) {
        REP(j, 0, m) {
            if (i - num[a[j]] >= 0) {
                dp[i] = max(dp[i], dp[i - num[a[j]]] + 1);
            }
        }
    }

    string ans = "";
    ll match = n;
    REP(i, 0, dp[n]) {
        RREP(j, 0, m) {
            if (match - num[a[j]] >= 0) {
                if (dp[match - num[a[j]]] == dp[match] - 1) {
                    ans += to_string(a[j]);
                    match -= num[a[j]];
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}