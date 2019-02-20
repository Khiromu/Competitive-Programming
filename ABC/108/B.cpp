#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i=a; i<n; i++)
#define RREP(i, a, n) for(ll i=n-1; i>=a; i--)
typedef long long ll;
const ll mod =1e9+7;
const ll inf =1e18;
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y1>>x2>>y2;

    x3=y1-y2+x2;
    y3=x2-x1+y2;
    x4=y1-y2+x1;
    y4=x2-x1+y1;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
    return 0;
}