// Problem Link: https://codeforces.com/contest/2224/problem/A
// Submission Link: https://codeforces.com/contest/2224/submission/373661535

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
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll best = 0;
    int res = 0;

    for (int i = n-1; i >= 0; i--){
        best = arr[i] + max(0LL, best);
        if (best > 0) res++;
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}