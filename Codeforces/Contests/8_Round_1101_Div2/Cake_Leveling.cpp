// Problem Link: https://codeforces.com/contest/2232/problem/B
// Submission Link: https://codeforces.com/contest/2232/submission/376657120

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = LLONG_MAX;
    ll pref = 0;

    for (int i = 0; i < n; i++)
    {
        pref += arr[i];
        ans = min(ans, pref / (i + 1));
        cout << ans;
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}