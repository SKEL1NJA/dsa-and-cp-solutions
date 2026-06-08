// Problem Link: https://codeforces.com/contest/2234/problem/A
// Submission Link: https://codeforces.com/contest/2234/submission/377624738

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

    sort(arr.begin(), arr.end(), greater<int>());

    if (n == 2)
    {
        cout << arr[0] << " " << arr[1] << endl;
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] != (arr[i - 2] % arr[i - 1]))
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << arr[0] << " " << arr[1] << endl;
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