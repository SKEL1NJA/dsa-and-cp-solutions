// Problem Link: https://codeforces.com/problemset/problem/339/A
// Submission Link: https://codeforces.com/problemset/submission/339/370882723

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
    string s;
    cin >> s;

    vector<int> numbers;

    for (int i = 0; i < s.length();i++){
        if(isdigit(s[i]))
            numbers.pb(s[i] - '0');
    }

    sort(all(numbers));

    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i];
        if(i != numbers.size()-1)
            cout << "+";
    }
}

int main() { 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}