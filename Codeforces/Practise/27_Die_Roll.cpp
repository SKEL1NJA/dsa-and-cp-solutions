// Problem Link: https://codeforces.com/problemset/problem/9/A
// Submission Link: https://codeforces.com/problemset/submission/9/371077012

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int y, w;
    cin >> y >> w;

    int greater = max(y, w);

    int cnt = 0;

    for (int i = greater; i <= 6;i++){
        cnt++;
    }

    if(cnt==1)
        cout << "1/6" << endl;
    else if(cnt==2)
        cout << "1/3" << endl;
    else if(cnt==3)
        cout << "1/2" << endl;
    else if(cnt==4)
        cout << "2/3" << endl;
    else if(cnt==5)
        cout << "5/6" << endl;
    else if(cnt==6)
        cout << "1/1" << endl;
    else
        cout << "0/1" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}