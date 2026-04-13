// Problem Link: https://codeforces.com/contest/2220/problem/A
// Submission Link: https://codeforces.com/contest/2220/submission/370970980

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

    map<int,int> freq;
    for (int x : arr) freq[x]++;
    for (auto& [val, cnt] : freq) {
        if (cnt > 1) {
            cout << -1 << "\n";
            return;
        }
    }

    sort(all(arr), greater<int>());

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}