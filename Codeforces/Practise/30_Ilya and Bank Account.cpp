// Problem Link: https://codeforces.com/problemset/problem/313/A
// Submission Link: https://codeforces.com/problemset/submission/313/371322650

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;

    if(n>0){
        cout << n << endl;
        return;
    }

    string s = to_string(n);
    int len = s.length();

    int ld = s[len - 1] - '0';
    int sld = s[len - 2] - '0';

    if(ld>sld)
        s.erase(len - 1, 1);
    else
        s.erase(len - 2, 1);

    cout << stoi(s) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}