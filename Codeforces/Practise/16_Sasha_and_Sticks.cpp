// Problem Link: https://codeforces.com/problemset/problem/832/A
// Submission Link: https://codeforces.com/problemset/submission/832/370053044

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
    ll n, k;
    cin >> n >> k;

    ll moves = n / k;

    if(moves%2==0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}