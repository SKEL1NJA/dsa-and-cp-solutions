// Problem Link: https://codeforces.com/problemset/problem/703/A
// Submission Link: https://codeforces.com/problemset/submission/703/370883199

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
    vector<pll> games(n);

    ll m = 0, c = 0;

    for (ll i = 0; i < n;i++){
        cin >> games[i].fi >> games[i].se;
        if(games[i].fi > games[i].se)
            m++;
        else if(games[i].fi < games[i].se)
            c++;
        else continue;
    }

    if(m>c)
        cout << "Mishka" << endl;
    else if(m==c)
        cout << "Friendship is magic!^^" << endl;
    else
        cout << "Chris" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}