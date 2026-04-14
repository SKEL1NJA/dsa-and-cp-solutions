// Problem Link: https://codeforces.com/problemset/problem/2195/B
// Submission Link: https://codeforces.com/problemset/submission/2195/371122228

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
    vector<int> arr(n+1,0);
    for (int i = 1; i <= n;i++){
        cin >> arr[i];
    }
    
    for (int i = 1; i <= n; i+=2){
        vector<int> indices, values;
        for (int j = i; j <= n; j*=2){
            indices.pb(j);
            values.pb(arr[j]);
        }

        sort(all(values));

        if(values != indices){
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