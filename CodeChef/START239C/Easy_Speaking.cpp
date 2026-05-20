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

    if (n < 4)
    {
        cout << "No" << endl;
        return;
    }

    int i = 0, j = 0;
    while (j < n)
    {
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' ||
            s[j] == 'u')
        {
            i = j + 1;
        }
        else
        {
            if (j - i + 1 >= 4)
            {
                cout << "Yes" << endl;
                return;
            }
        }
        j++;
    }
    cout << "No" << endl;
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