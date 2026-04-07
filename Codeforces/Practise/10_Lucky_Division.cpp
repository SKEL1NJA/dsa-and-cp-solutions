// Problem Link: https://codeforces.com/problemset/problem/122/A
// Submission Link: https://codeforces.com/problemset/submission/122/369424252

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    if(n%4==0 || n%7==0 || n% 44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%777==0 || n%774==0 || n%747==0 || n%744==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}