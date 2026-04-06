// Problem Link: https://codeforces.com/problemset/problem/405/A
// Submission Link: https://codeforces.com/problemset/submission/405/369926676

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
    vector<int> box(n);
    for (int i = 0; i < n;i++){
        cin >> box[i];
    }

    sort(all(box));

    for (int i = 0; i < n;i++)
        cout << box[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}