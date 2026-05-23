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
    ll n, m, k;
    cin >> n >> m >> k;

    ll full_k = 0;
    vll rems;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        full_k += x / k;
        if (x % k > 0)
        {
            rems.pb(x % k);
        }
    }

    sort(rems.rbegin(), rems.rend());

    ll budget = m + 1;
    ll ans = 0;

    ll take_k = min(full_k, budget / (k + 1));
    ans += take_k * k;
    budget -= take_k * (k + 1);

    if (full_k > take_k)
    {
        ans += max(0LL, budget - 1);
        budget = 0;
    }

    for (ll r : rems)
    {
        if (budget <= 0) break;

        if (budget >= r + 1)
        {
            ans += r;
            budget -= (r + 1);
        }
        else
        {
            ans += max(0LL, budget - 1);
            budget = 0;
            break;
        }
    }

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