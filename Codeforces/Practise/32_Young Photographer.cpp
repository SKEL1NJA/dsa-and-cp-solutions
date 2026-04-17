// Problem Link: https://codeforces.com/problemset/problem/14/B
// Submission Link: https://codeforces.com/problemset/submission/14/371443416

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
    int n, x0;
    cin >> n >> x0;
    vector<pair<int, int>> players(n);

    int l = 0, r = 1000;

    for(auto& player : players){
        cin >> player.fi >> player.se;
        l = max(l, min(player.fi, player.se));
        r = min(r, max(player.fi, player.se));
    }

    if(l > r){
        cout << -1 << endl;
        return;
    }

    if(x0 < l)
        cout << l - x0 << endl;
    else if(x0 > r)
        cout << x0 - r << endl;
    else
        cout << 0 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}