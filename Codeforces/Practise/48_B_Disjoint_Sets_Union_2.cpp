// Problem Link: https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/B
// Submission Link: https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/submission/382182623

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

int find(vector<int>& parent, int v){
    return parent[v] = (parent[v]==v) ? v : find(parent, parent[v]);
}

void Union(vector<int>& parent, vector<int>& rank, vector<int>& minEle, vector<int>& maxEle, vector<int>& sz, int u, int v){
    u = find(parent, u);
    v = find(parent, v);

    if(u==v)
        return;

    int newRoot;

    if(rank[u] < rank[v]){
        parent[u] = v;
        newRoot = v;
    }
    else if(rank[v] < rank[u]){
        parent[v] = u;
        newRoot = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
        newRoot = u;
    }

    minEle[newRoot] = min(minEle[u], minEle[v]);
    maxEle[newRoot] = max(maxEle[u], maxEle[v]);
    sz[newRoot] = sz[u] + sz[v];
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> parent(n+1);
    vector<int> rank(n+1, 0);
    vector<int> minEl(n+1), maxEl(n+1), sz(n+1, 1);

    for(int i=1;i<=n;i++){
        parent[i] = i;
        minEl[i] = i;
        maxEl[i] = i;
    }

    while(m--){
        string str;
        cin>>str;

        if(str == "union"){
            int u, v;
            cin>>u>>v;
            Union(parent, rank, minEl, maxEl, sz, u, v);
        }

        else{
            int v;
            cin>>v;
            int root = find(parent, v);
            cout<<minEl[root]<<" "<<maxEl[root]<<" "<<sz[root]<<endl;
        }
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