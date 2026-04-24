// Problem Link: https://cses.fi/problemset/task/1637/
// Submission Link: https://cses.fi/problemset/result/16996722/

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

int f(int num){
    dp[0] = 0;
    for (int i = 1; i <= 9;i++)
        dp[i] = 1;

    for (int n = 10; n <= num;n++){
        vector<int> d = get_digits(n);
        int ans = INT_MAX;

        for (int i = 0; i < d.size();i++){
            ans = min(ans, dp[n-d[i]]);
        }
        dp[n] = 1 + ans; 
    }

    return dp[num];
}

void solve() {
    int n;
    cin >> n;

    dp.resize(1000005, -1);
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