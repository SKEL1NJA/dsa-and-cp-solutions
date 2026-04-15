// Problem Link: https://codeforces.com/problemset/problem/2185/C
// Submission Link: https://codeforces.com/problemset/submission/2185/371202105

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

    sort(all(arr));
    arr.erase(unique(all(arr)), arr.end()); // removing duplicates
    n = arr.size();

    int res = 1, curr = 1;

    for (int i = 1; i < n;i++){
        if(arr[i]==arr[i-1]+1)
            curr++;
        else
            curr = 1;
        res = max(res, curr);
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}