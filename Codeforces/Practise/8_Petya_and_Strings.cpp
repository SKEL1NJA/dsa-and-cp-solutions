// Problem Link: https://codeforces.com/problemset/problem/112/A
// Submission Link: https://codeforces.com/problemset/submission/112/369310902

#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    string t;
    cin >> t;

    int n = s.length();

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    int i = 0;

    while(i<n){
        if(s[i] < t[i]){
            cout << -1 << endl;
            return;
        }
        else if(s[i] > t[i]){
            cout << 1 << endl;
            return;
        }
        i++;
    }

    cout << 0 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}