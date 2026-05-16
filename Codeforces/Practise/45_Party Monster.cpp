// Problem Link: https://codeforces.com/contest/2227/problem/B
// Submission Link: https://codeforces.com/contest/2227/submission/374566937

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
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt1=0, cnt2=0;

    for(int i=0;i<n;i++){
        if(s[i]=='(') cnt1++;
        else cnt2++;
    }

    if(cnt1==cnt2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}