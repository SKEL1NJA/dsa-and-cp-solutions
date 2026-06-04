#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;

    ll sum = 0;
    ll bitwise_or = 0;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        bitwise_or |= x;
    }

    if (sum == bitwise_or)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
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