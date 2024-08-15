#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false) ; cin.tie(nullptr) ;
#define ll long long
//#define int long long
using namespace std ;

void IO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<ll> Divisors (ll n) {
    vector<ll> divisors ;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i * i != n)
                divisors.push_back(n/i) ;
        }
    }
    return divisors ;
}

void solve() {
    int n ; cin >> n ;
    vector<ll> v = Divisors(n) ;
    for (ll i : v) {
        cout << i << ' ' ;
    }
}
int main() {
    IO();
    fast

    int t = 1 ;
//    cin >> t ;
    while (t--) {
        solve();
//        cout << '\n' ;
    }
    return 0;
}


