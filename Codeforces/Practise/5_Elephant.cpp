// Problem Link: https://codeforces.com/problemset/problem/617/A
// Submission Link: https://codeforces.com/problemset/submission/617/369062416

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin >> x;

    if(x<=5){
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    while(x > 0){
        x -= 5;
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