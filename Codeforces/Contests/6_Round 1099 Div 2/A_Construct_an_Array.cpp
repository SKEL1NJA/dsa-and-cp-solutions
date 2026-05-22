// Problem Link: https://codeforces.com/contest/2231/problem/A
// Submission Link: https://codeforces.com/contest/2231/submission/375582118

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define fi first
#define se second

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

void solve()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        if(i==1) cout<<i<<" ";
        else if(i%2 == 0) cout<<2*(i-1)<<" ";
        else cout<<2*i-1<<" ";
    }

    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}