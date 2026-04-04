// Problem Link: https://codeforces.com/contest/2218/problem/C
// Submission Link: https://codeforces.com/contest/2218/submission/369687029

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
    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        if(i > 1) cout << " ";
        cout << i << " " << n + 2*i - 1 << " " << n + 2*i;
    }

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}