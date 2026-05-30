// Problem Link: https://codeforces.com/contest/2232/problem/A
// Submission Link: https://codeforces.com/contest/2232/submission/376638907

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

    sort(all(arr));

    int mid = n / 2;
    int target = arr[mid];

    int l = 0, r = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < target)
            l++;
        else if (arr[i] > target)
            r++;
    }

    cout << max(l, r) << endl;
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