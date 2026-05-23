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

bool check(vector<int>& arr, int k) {
    int i = 0, j = arr.size() - 1;

    while (i <= j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        }
        else {
            if (arr[i] == k) {
                i++;
            }
            else if (arr[j] == k) {
                j--;
            }
            else {
                return false;
            }
        }
    }

    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    if(check(arr, k))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}