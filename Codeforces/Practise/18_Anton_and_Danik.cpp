// Problem Link: https://codeforces.com/problemset/problem/734/A
// Submission Link: https://codeforces.com/problemset/submission/734/370278738

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

    string s;
    cin >> s;

    int cntA = 0, cntD = 0;

    for (int i = 0; i < n;i++){
        if(s[i] == 'A')
            cntA++;
        else
            cntD++;
    }

    if(cntA > cntD)
        cout << "Anton" << endl;
    else if(cntA == cntD)
        cout << "Friendship" << endl;
    else
        cout << "Danik" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}