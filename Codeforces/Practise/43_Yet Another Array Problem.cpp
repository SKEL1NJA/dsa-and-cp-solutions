// Problem Link: https://codeforces.com/contest/2167/problem/D
// Submission Link: https://codeforces.com/contest/2167/submission/374343773

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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n;i++){
        cin >> arr[i];
    }

    for (ll x = 2; x <= 1e18;x++){
        for (int i = 0; i < n;i++){
            if(__gcd(arr[i], x) == 1LL){
                cout << x << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}