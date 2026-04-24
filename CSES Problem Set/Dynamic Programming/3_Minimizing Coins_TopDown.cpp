// Problem Link: https://cses.fi/problemset/task/1634
// Submission Link: https://cses.fi/problemset/result/16997117/
// TLE

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

int f(int x, int n, vector<int>& c){
    if(x==0)
        return 0;
    
    if(dp[x] != -1)
        return dp[x];

    int ans = INT_MAX;

    for (int i = 0; i < c.size();i++){
        if(x-c[i] < 0) continue;
        int temp = f(x - c[i], n, c);
        if(temp != -1)
            ans = min(ans, temp);
    }

    if(ans==INT_MAX)
        return dp[x] = -1;
    return dp[x] = 1 + ans;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n;i++){
        cin >> c[i];
    }

    dp.clear();
    dp.resize(1000005, -1);

    cout << f(x, n, c);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}