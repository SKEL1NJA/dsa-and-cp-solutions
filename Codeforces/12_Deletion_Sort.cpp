// Problem Link: https://codeforces.com/contest/2200/problem/B
// Submission Link: https://codeforces.com/contest/2200/submission/369861529

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
    ll n;
    cin >> n;

    bool flag = true; // sorted;

    vll arr(n);
    for (ll i = 0; i < n;i++){
        cin >> arr[i];
        if(i>=1 && arr[i] < arr[i-1])
            flag = false;
    }

    if(flag==true){
        cout << arr.size() << endl;
        return;
    }

    cout << 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}