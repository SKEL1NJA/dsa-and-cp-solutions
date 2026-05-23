// Problem Link: https://codeforces.com/contest/2229/problem/A
// Solution Link: https://codeforces.com/contest/2229/submission/375796023

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

    int mini = INT_MAX, maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mini) mini = arr[i];
        if (arr[i] > maxi) maxi = arr[i];
    }

    int mid = (mini + maxi) / 2;

    int ans = max(abs(mini - mid), abs(maxi - mid));

    cout << ans << endl;
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