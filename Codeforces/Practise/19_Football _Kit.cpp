// Problem Link: https://codeforces.com/problemset/problem/432/B
// Submission Link: https://codeforces.com/problemset/submission/432/370440404

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
    vector<pll> teams(n);
    unordered_map<ll, ll> mp;
    for (ll i = 0;i<n;i++){
        cin >> teams[i].fi >> teams[i].se;
        mp[teams[i].fi]++;
    }

    for (ll i = 0; i < n;i++){
        ll away_colour = teams[i].se;
        ll forced_home = mp[away_colour]; // when away colour = home colour of the home team

        ll home_games = (n - 1) + forced_home;
        ll away_games = (n - 1) - forced_home;

        cout << home_games << " " << away_games << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}