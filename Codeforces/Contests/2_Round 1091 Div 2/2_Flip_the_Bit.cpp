// Problem Link: https://codeforces.com/contest/2217/problem/B
// Submission Link: https://codeforces.com/contest/2217/submission/370153909

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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    int p;
    cin >> p;
    p--;

    int x = a[p];

    int left_flips = 0;
    int right_flips = 0;

    // LEFT SIDE
    int cur = x;
    for (int i = p - 1; i >= 0; i--) {
        if (a[i] != cur) {
            left_flips++;
            cur = a[i];
        }
    }

    // RIGHT SIDE
    cur = x;
    for (int i = p + 1; i < n; i++) {
        if (a[i] != cur) {
            right_flips++;
            cur = a[i];
        }
    }
    
    int ans = max(left_flips, right_flips);
    
    if (ans % 2 != 0) {
        ans++;
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}