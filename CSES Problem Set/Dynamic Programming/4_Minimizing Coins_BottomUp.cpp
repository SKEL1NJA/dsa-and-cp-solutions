// Problem Link: https://cses.fi/problemset/task/1634/
// Submission Link: https://cses.fi/problemset/result/16997435/

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

vector<int> dp(1000005, -1);

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n;i++){
        cin >> c[i];
    }

    dp.clear();
    dp.resize(x + 1, -1);

    dp[0] = 0;

    for (int i = 1; i <= x;i++){
        int ans = INT_MAX;

        for (int j = 0; j < c.size();j++){
            if(i-c[j] < 0) continue;
            
            int temp = dp[i - c[j]];
            if(temp != -1)
                ans = min(ans, temp);
        }

        if(ans==INT_MAX)
            dp[i] = -1;
        else 
            dp[i] = 1 + ans;
    }

    cout << dp[x] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}