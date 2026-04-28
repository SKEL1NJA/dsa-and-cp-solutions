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

vector<vector<int>> dp;

int f(int i, int j, vector<int>& arr){
    if(i==j || i+1==j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];

    int ans = INT_MAX;
    for (int k = i + 1; k < j;k++){
        ans = min(ans, f(i, k, arr) + f(k, j, arr) + arr[i] * arr[k] * arr[j]);
    }

    return dp[i][j] = ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> mat(n);
    for (int i = 0; i < n;i++){
        cin >> mat[i];
    }

    dp.clear();
    dp.resize(1005, vector<int>(1000, -1));

    cout << f(0, n - 1, mat) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}