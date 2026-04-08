// Problem Link: https://codeforces.com/problemset/problem/580/A
// Submission Link: https://codeforces.com/problemset/submission/580/370277318

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
    vector<int> arr(n);

    int maxSub = 1, curr = 1;

    for (int i = 0; i < n;i++){
        cin >> arr[i];

        if(i>=1){
            if(arr[i]>=arr[i-1]){
                curr++;
                maxSub = max(maxSub, curr);
            }
            else
                curr = 1;
        }
    }

    cout << maxSub << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}