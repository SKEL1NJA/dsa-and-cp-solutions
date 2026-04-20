// Problem Link: https://codeforces.com/problemset/problem/1814/A
// Submission Link: https://codeforces.com/problemset/submission/1814/371824944

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
    ll n, k;
    cin >> n >> k;

    if(k==1 || k==n || n%2==0){
        cout << "YES" << endl;
        return;
    }

    if(((n-k)%2) == 0){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}