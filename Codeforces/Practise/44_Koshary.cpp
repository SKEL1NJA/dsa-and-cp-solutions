// Problem Link: https://codeforces.com/contest/2227/problem/A
// Submission Link: https://codeforces.com/contest/2227/submission/374565745

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
    int x,y;
    cin>>x>>y;

    if(x%2==0 && y%2==0){
        cout<<"YES"<<endl;
        return;
    }

    if(x%2!=0 && y%2!=0){
        cout<<"NO"<<endl;
        return;
    }

    if((x%2==0 && y%2!=0) || (x%2!=0 && y%2==0)){
        cout<<"YES"<<endl;
        return;
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