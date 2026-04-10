// Problem Link: https://codeforces.com/problemset/problem/581/A
// Submission Link: https://codeforces.com/problemset/submission/581/370495262

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int a, b;
    cin >> a >> b;

    int diff = 0, same = 0;

    while(a>0 && b>0){
        diff++;
        a--, b--;
    }

    if(a>0)
        same = a / 2;
    else
        same = b / 2;

    cout << diff << " " << same << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}