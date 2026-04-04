// Problem Link: https://codeforces.com/contest/2218/problem/D
// Submission Link: https://codeforces.com/contest/2218/submission/369720198

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll p = 2;
    ll prev = 2;
    bool first = true;

    auto is_prime = [](ll x) {
        if (x < 2) return false;
        for (ll i = 2; i * i <= x; i++)
            if (x % i == 0) return false;
        return true;
    };
    
    vector<ll> primes;
    ll num = 2;
    while ((ll)primes.size() <= n) {
        if (is_prime(num)) primes.push_back(num);
        num++;
    }
    
    for (ll i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << primes[i] * primes[i+1];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}