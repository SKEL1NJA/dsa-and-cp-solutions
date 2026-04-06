// Problem Link: https://codeforces.com/problemset/problem/160/A
// Submission Link: https://codeforces.com/problemset/submission/160/369927574

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
    int n;
    cin >> n;
    vector<int> coins(n);

    int total = 0;
    for (int i = 0; i < n;i++){
        cin >> coins[i];
        total += coins[i];
    }

    sort(all(coins));

    int coinsSum = 0, cnt = 0;
    for (int i = n - 1; i >= 0;i--){
        if(coinsSum > total/2)
            break;
        coinsSum+=coins[i];
        cnt++;
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}