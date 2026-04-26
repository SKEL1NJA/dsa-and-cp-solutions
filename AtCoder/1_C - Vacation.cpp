// Problem Link: https://atcoder.jp/contests/dp/tasks/dp_c
// Submission Link: https://atcoder.jp/contests/dp/submissions/75299460

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
    int n;
    cin >> n;

    vector<vector<int>> dp(n, vector<int>(3, 0));

    int a, b, c;
    cin >> a >> b >> c;
    dp[0][0] = a, dp[0][1] = b, dp[0][2] = c;

    for (int i = 1; i < n;i++){
        int x, y, z;
        cin >> x >> y >> z;
        dp[i][0] = x + max(dp[i - 1][1], dp[i - 1][2]);
        dp[i][1] = y + max(dp[i - 1][0], dp[i - 1][2]);
        dp[i][2] = z + max(dp[i - 1][0], dp[i - 1][1]);
    }

    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}