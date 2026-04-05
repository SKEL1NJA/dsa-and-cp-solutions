// Problem Link: https://codeforces.com/contest/2200/problem/A
// Submission Link: https://codeforces.com/contest/2200/submission/369858566


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

    vll table(n);
    for (ll i = 0; i < n;i++){
        cin >> table[i];
    }

    sort(all(table));

    ll cnt = 1, val = table[n - 1];

    for (ll i = n - 2; i >= 0;i--){
        if(table[i]==val)
            cnt++;
        else
            break;
    }

    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}