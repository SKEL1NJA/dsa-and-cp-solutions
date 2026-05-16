// Problem Link: https://codeforces.com/contest/2227/problem/C
// Submission Link: https://codeforces.com/contest/2227/submission/374577522

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

    vector<int> f6, f2, f3, fn;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 6 == 0)
            f6.push_back(arr[i]);
        else if (arr[i] % 2 == 0)
            f2.push_back(arr[i]);
        else if (arr[i] % 3 == 0)
            f3.push_back(arr[i]);
        else
            fn.push_back(arr[i]);
    }

    for (int x : f6)
        cout << x << " ";
    for (int x : f2)
        cout << x << " ";
    for (int x : fn)
        cout << x << " ";
    for (int x : f3)
        cout << x << " ";

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}