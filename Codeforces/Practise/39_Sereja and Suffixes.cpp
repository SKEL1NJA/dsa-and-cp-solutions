// Problem Link: https://codeforces.com/problemset/problem/368/B
// Submission Link: https://codeforces.com/problemset/submission/368/373581431

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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    vector<int> unique(n,0);
    unique[n - 1] = 1;

    set<int> st;
    st.insert(arr[n-1]);

    for (int i = n - 2; i >= 0;i--){
        if(st.find(arr[i]) == st.end()){
            st.insert(arr[i]);
            unique[i] = st.size();
        }
        else{
            unique[i] = unique[i + 1];
        }
    }

    for (int i = 0; i < m;i++){
        int x;
        cin >> x;
        cout << unique[x-1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    
    return 0;
}