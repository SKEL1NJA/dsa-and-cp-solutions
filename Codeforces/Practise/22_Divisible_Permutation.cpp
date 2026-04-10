// Problem Link: https://codeforces.com/problemset/problem/2188/A
// Submission Link: https://codeforces.com/problemset/submission/2188/370550477

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

    int lo = 1, hi = n;

    vector<int> res(n);

    for (int i = 0; i < n;i++){
        if(i%2==0){
            res[i] = hi--;
        }
        else{
            res[i] = lo++;
        }
    }

    reverse(all(res));

    for (int i = 0; i < n;i++)
        cout << res[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}