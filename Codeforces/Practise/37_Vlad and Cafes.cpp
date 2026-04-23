// Problem Link: https://codeforces.com/problemset/problem/886/B
// Submission Link: https://codeforces.com/problemset/submission/886/372240604

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
    vector<int> ind(n);

    unordered_map<int, int> mp;

    for (int i = 0; i < n;i++){
        cin >> ind[i];
        mp[ind[i]] = i;
    }

    int minValue = INT_MAX;
    int res = -1;

    for(auto &it : mp){
        int cafe = it.first;
        int last = it.second;
        if(last < minValue){
            minValue = last;
            res = cafe;
        }
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}