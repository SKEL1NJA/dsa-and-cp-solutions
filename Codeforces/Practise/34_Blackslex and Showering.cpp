// Problem Link: https://codeforces.com/contest/2179/problem/B
// Submission Link: https://codeforces.com/contest/2179/submission/371591454

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
    int time = 0;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        if(i>=1){
            time += abs(arr[i] - arr[i - 1]);
        }
    }

    int currTime = time;

    // removing first
    time = min(time, currTime - abs(arr[1] - arr[0]));
    // removing last
    time = min(time, currTime - abs(arr[n-1] - arr[n-2]));

    for (int i = 1; i < n - 1;i++){
        int removed = abs(arr[i - 1] - arr[i]) + abs(arr[i] - arr[i + 1]);
        int added = abs(arr[i - 1] - arr[i + 1]);
        time = min(time, currTime - removed + added);
    }

    cout << time << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}