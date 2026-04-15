// Problem Link: https://www.codechef.com/START234C/problems/NONNEGSUM
// Submission Link: https://www.codechef.com/viewsolution/1262653605

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
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    sort(all(arr), greater<int>());

    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (sum >= 0)
            maxLen++;
        else
            break;
    }

    cout << maxLen << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}