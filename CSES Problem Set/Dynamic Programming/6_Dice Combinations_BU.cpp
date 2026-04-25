// Problem Link: https://cses.fi/problemset/task/1633
// Submission Link: https://cses.fi/problemset/result/17002158/

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

vector<ll> dp(1000006, -1);

ll f(ll n){
    dp[0] = 1;

    for (int k = 1; k <= n;k++){
        ll sum = 0;
        for (int i = 1; i <= 6;i++){
            if(k-i<0)
                break;
            sum = (sum % MOD + dp[k - i] % MOD) % MOD;
        }
        dp[k] = sum % MOD;
    }

    return dp[n];
}

void solve() {
    ll n;
    cin >> n;

    cout << f(n) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}