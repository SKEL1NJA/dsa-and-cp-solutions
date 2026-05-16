// Problem Link: https://codeforces.com/contest/2228/problem/B
// Submission Link: https://codeforces.com/contest/2228/submission/374803229

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
    ll n, x1, x2, k;
    cin >> n >> x1 >> x2 >> k;

    ll linear_diff = abs(x1 - x2);
    ll diff = min(linear_diff, n - linear_diff);

    if (n <= 3) {
        cout << 1 << endl;
    } else
        cout << diff + k << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}