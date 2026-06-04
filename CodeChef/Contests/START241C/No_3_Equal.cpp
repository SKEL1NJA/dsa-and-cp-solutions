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
    string s;
    cin >> s;

    if (n == 1 || n == 2)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    int i = 2;

    while (i < n)
    {
        if (s[i] == s[i - 1] && s[i] == s[i - 2])
        {
            cnt++;
            i += 3;
        }
        else
            i++;
    }

    cout << cnt << endl;
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