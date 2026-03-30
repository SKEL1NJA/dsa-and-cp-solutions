// Problem link: https://codeforces.com/problemset/problem/4/A


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int w;
    cin >> w;

    if(w==2)
        cout << "NO" << endl;
    else if(w%2 == 0)
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