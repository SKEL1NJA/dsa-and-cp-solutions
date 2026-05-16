// Problem Link: https://codeforces.com/contest/2228/problem/A
// Submission Link: https://codeforces.com/contest/2228/submission/374778587

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;

    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0)
            c0++;
        else if (x == 1)
            c1++;
        else
            c2++;
    }

    int ans = c0;
    ans += min(c1, c2);
    int rem = abs(c1 - c2);
    ans += rem / 3;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}