// Problem Link: https://codeforces.com/contest/2229/problem/C1
// Submission Link: https://codeforces.com/contest/2229/submission/375826564

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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ops;
    int flips = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        bool is_positive =
            (arr[i] > 0 && flips % 2 == 0) || (arr[i] < 0 && flips % 2 != 0);
        if (is_positive)
        {
            ops.pb(i + 1);
            flips++;
        }
    }

    cout << ops.size() << endl;
    for (int i = 0; i < ops.size(); i++)
    {
        cout << ops[i] << (i == ops.size() - 1 ? "" : " ");
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