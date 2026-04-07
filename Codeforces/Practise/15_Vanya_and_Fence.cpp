// Problem Link: https://codeforces.com/problemset/problem/677/A
// Submission Link: https://codeforces.com/problemset/submission/677/370051871

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
    int n, h;
    cin >> n >> h;

    vector<int> heights(n);

    int width = 0;
    for (int i = 0; i < n;i++){
        cin >> heights[i];
        if(heights[i]>h)
            width += 2;
        else
            width += 1;
    }

    cout << width << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}