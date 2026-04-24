// Problem Link: https://cses.fi/problemset/task/1637/
// Submission Link: https://cses.fi/problemset/result/16996569/

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

vector<int> get_digits(int n){
    vector<int> res;

    while(n>0){
        if(n%10 != 0)
            res.push_back(n % 10);
        n /= 10;
    }

    return res;
}

vector<int> dp(1000005, -1);

int f(int n, vector<int>& dp){
    if(n==0)
        return 0;
    if(n<=9)
        return 1;
    if(dp[n] != -1)
        return dp[n];

    vector<int> d = get_digits(n);
    int ans = INT_MAX;

    for (int i = 0; i < d.size();i++){
        ans = min(ans, f(n-d[i], dp));
    }

    return dp[n] = 1 + ans;
}

void solve() {
    int n;
    cin >> n;

    dp.resize(1000005, -1);
    cout << f(n, dp) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}