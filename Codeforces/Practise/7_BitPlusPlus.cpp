// Problem Link: https://codeforces.com/problemset/problem/282/A
// Submission Link: https://codeforces.com/problemset/submission/282/369309915

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int res = 0;

    while(n--){
        string statement;
        cin >> statement;

        if(statement=="++X" || statement=="X++")
            res += 1;
        else
            res--;
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}