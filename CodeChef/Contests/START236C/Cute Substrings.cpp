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
    cin >> n;
    string s;
    cin >> s;

    int maxLen = 0;

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int len = j - i + 1;

            if(len % 2 == 0) continue; 
            bool ok = true;

            for(int k = 0; k < len; k++){
                if(k % 2 == 0){
                    if(s[i + k] != 'u' && s[i + k] != 'o'){
                        ok = false;
                        break;
                    }
                } else {
                    if(s[i + k] != 'w'){
                        ok = false;
                        break;
                    }
                }
            }

            if(ok) maxLen = max(maxLen, len);
        }
    }

    cout << maxLen << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}