// Problem Link: https://codeforces.com/contest/2217/problem/A
// Submission Link: https://codeforces.com/contest/2217/submission/370133366

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

    vector<int> arr(n);

    int sum = 0;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 1 || (1LL * n * k) % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}