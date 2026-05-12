// Problem Link: https://codeforces.com/contest/2167/problem/B
// Submission Link: https://codeforces.com/contest/2167/submission/374294841

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
    string s, t;
    cin >> s >> t;

    sort(all(s));
    sort(all(t));

    for (int i = 0; i < n;i++){
        if(s[i]!=t[i]){
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}