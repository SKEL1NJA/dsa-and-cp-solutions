// Problem Link: https://codeforces.com/contest/158/problem/A
// Submission Link: https://codeforces.com/contest/158/submission/368923463

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int score = arr[k - 1];
    int cnt = 0;

    for (int i = 0; i < n;i++){
        if(arr[i] > 0 && arr[i] >= score)
            cnt++;
    }

    cout << cnt << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}