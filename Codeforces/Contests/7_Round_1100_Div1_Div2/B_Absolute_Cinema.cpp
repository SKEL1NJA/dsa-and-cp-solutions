// Problem Link: https://codeforces.com/contest/2229/problem/B
// Submission Link: https://codeforces.com/contest/2229/submission/375808051

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
    vector<int> arr(n), brr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    int i = 0;
    while (i < n)
    {
        if (arr[i] > brr[i]) swap(arr[i], brr[i]);
        i++;
    }

    int max_arr = *max_element(all(arr));
    ll sum_brr = 0;
    for (int j = 0; j < n; j++) sum_brr += brr[j];

    cout << max_arr + sum_brr << endl;
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