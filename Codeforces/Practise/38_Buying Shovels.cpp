// Problem Link: https://codeforces.com/problemset/problem/1360/D
// Submission Link: https://codeforces.com/problemset/submission/1360/373424900

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

    ll ans = 1;

    for (ll i = 1; i * i <= n;i++){
        if(n%i==0){
            if(i<=k)
                ans = max(ans, i);
            if(n/i<=k)
                ans = max(ans, n / i);
        }
    }

    cout << n / ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}