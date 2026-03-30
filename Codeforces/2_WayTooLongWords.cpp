// Problem link: https://codeforces.com/problemset/problem/71/A


#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    while(n--){
        string word;
        cin >> word;

        if(word.length() > 10)
            cout << word[0] << word.length()-2 << word[word.length() - 1] << endl;
        else
            cout << word << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}