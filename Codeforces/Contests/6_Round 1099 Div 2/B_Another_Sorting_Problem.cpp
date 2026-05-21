// Problem Link: https://codeforces.com/contest/2231/problem/B
// Submission Link: https://codeforces.com/contest/2231/submission/375509509

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

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            k = max(k, arr[i - 1] - arr[i]);
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1]) arr[i] += k;
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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