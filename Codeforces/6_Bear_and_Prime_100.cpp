// Problem Link: https://codeforces.com/problemset/problem/679/A
// Submission Link: https://codeforces.com/problemset/submission/679/369068276

#include <bits/stdc++.h>
using namespace std;

int main() {
    int squares[] = {4, 9, 25, 49};
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    string response;
    int cnt = 0;

    for(int sq : squares){
        cout << sq << endl;
        cin >> response;
        if(response == "yes"){
            cout << "composite" << endl;
            return 0;
        }
    }

    for(int p : primes){
        cout << p << endl;
        cin >> response;
        if(response == "yes"){
            cnt++;
            if(cnt>=2){
                cout << "composite" << endl;
                return 0;
            }
        }
    }

    cout << "prime" << endl;
    return 0;
}