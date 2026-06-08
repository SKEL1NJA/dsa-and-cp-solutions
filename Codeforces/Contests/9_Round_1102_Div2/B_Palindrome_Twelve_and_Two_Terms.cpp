// Problem Link: https://codeforces.com/contest/2234/problem/B
// Submission Link: https://codeforces.com/contest/2234/submission/377649494

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
    ll n;
    cin >> n;

    long long rem = n % 12;
    long long a = -1;

    if (rem <= 9)
        a = rem;
    else if (rem == 10)
        a = 22;
    else if (rem == 11)
        a = 11;

    if (n >= a)
        cout << a << " " << n - a << endl;
    else
        cout << "-1" << endl;
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