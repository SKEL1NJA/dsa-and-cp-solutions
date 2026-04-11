// Problem Link: https://codeforces.com/contest/2184/problem/A
// Submission Link: https://codeforces.com/contest/2184/submission/370637246

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

    if(n<=3){
        cout << n << endl;
        return;
    }

    if(n%2 == 0){
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}