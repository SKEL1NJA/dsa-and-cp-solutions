// Problem Link: https://codeforces.com/problemset/problem/389/A
// Submission Link: https://codeforces.com/problemset/submission/389/371325644

#include <bits/stdc++.h>
#include <numeric>
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

    int g = 0;
    for(int x:arr){
        g = __gcd(g, x);
    }

    cout << g * n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}