// Problem Link: https://codeforces.com/contest/2167/problem/A
// Submission Link: https://codeforces.com/contest/2167/submission/374293896

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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a==b && a==c && a==d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}