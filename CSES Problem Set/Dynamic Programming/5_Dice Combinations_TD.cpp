// Problem Link: https://cses.fi/problemset/task/1633
// Submission Link: https://cses.fi/problemset/result/17002117/

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
    if(n==0)
        return 1;
    if(dp[n] != -1)
        return dp[n];

    ll sum = 0;
    for (int i = 1; i <= 6;i++){
        if(n-i<0)
            break;

        sum = (sum % MOD + f(n - i) % MOD) % MOD;
    }

    return dp[n] = sum % MOD;
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