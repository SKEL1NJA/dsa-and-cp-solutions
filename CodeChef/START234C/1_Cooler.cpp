// Problem Link: https://www.codechef.com/START234C/problems/COOLER7
// Submission Link: https://www.codechef.com/viewsolution/1262617298

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
    int n, m;
    cin >> n >> m;

    int pro = 1;
    for (int i = n; i > m;i--){
        pro += i;
    }

    cout << pro - 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}