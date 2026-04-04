// Problem Link: https://codeforces.com/contest/2218/problem/B
// Submission Link: https://codeforces.com/contest/2218/submission/369651622

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
    vector<int> arr(7);
    for (int i = 0; i < 7;i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int sum = arr[0]*-1;

    for (int i = 1; i < arr.size();i++){
        if(i<6){
            arr[i] = arr[i] * -1;
        }
        sum += arr[i];
    }

    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}