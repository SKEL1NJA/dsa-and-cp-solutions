// Problem Link: https://codeforces.com/contest/2184/problem/B
// Submission Link: https://codeforces.com/contest/2184/submission/370676958

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
    ll s, k, m;
    cin >> s >> k >> m;

    ll sand_collected = 0;

    if(k <= s){
        if((m/k)%2 == 0){ // odd step
            cout << s - (m % k) << endl;
        }
        else{ // even step
            cout << k - m % k << endl;
        }
    }
    else{
        cout << s - min(m % k, s) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}