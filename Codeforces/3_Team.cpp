// Problem Link: https://codeforces.com/problemset/problem/231/A
// Submission Link: https://codeforces.com/problemset/submission/231/368921899

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int probSolved = 0;

    while(n--){
        int cnt = 0;

        vector<int> arr(3);
        for (int i = 0; i < 3;i++){
            cin >> arr[i];
            if(arr[i] == 1)
                cnt++;
        }

        if(cnt>=2)
            probSolved++;
    }

    cout << probSolved << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}