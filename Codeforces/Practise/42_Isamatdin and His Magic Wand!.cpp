// Problem Link: https://codeforces.com/contest/2167/problem/C
// Submission Link: https://codeforces.com/contest/2167/submission/374342354

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

    bool par = false;

    for (int i = 0; i < n;i++){
        cin >> arr[i];
        if(i>=1){
            if(arr[i] % 2 != arr[0] % 2)
                par = true;
        }
    }

    if(!par){
        for (int i = 0; i < n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    sort(all(arr));

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
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