// Problem Link: https://codeforces.com/contest/2220/problem/B
// Submission Link: 

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
    ll n,m;
    cin >> n >> m;
    vector<ll> arr(n);
    for (ll i = 0; i < n;i++){
        cin >> arr[i];
    }

    if (n < m) {
        cout << "YES" << endl;
        return;
    }

    unordered_set<ll> bad;
    for (ll i = 0; i < n; i++) {
        ll badW = (m - (arr[i] + (i + 1)) % m) % m;
        bad.insert(badW);
    }

    if ((ll)bad.size() < m) {
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