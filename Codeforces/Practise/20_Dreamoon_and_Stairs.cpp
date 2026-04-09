// Problem Link: https://codeforces.com/problemset/problem/476/A
// Submission Link: https://codeforces.com/problemset/submission/476/370344832

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
    int n, m;
    cin >> n >> m;

    int minMoves = (n % 2 == 0) ? n / 2 : n / 2 + 1;

    for (int moves = minMoves; moves <= n;moves++){
        if(moves % m == 0){
            cout << moves << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}