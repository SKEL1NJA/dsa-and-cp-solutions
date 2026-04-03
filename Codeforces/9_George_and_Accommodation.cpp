// Problem Link: https://codeforces.com/problemset/problem/467/A
// Submission Link: https://codeforces.com/problemset/submission/467/369422103

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int cntRooms = 0;

    while(n--){
        int p, q;
        cin >> p >> q;
        if(p<q && q-p>=2)
            cntRooms++;
    }

    cout << cntRooms << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}