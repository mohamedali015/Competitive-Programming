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

vector<int> PrimeFactorization (int n ) {
    vector<int> factorization ;
    for (int i = 2; i < n; ++i) {
        while (n % i == 0) {
            factorization.push_back(i) ;
            n /= i ;
        }
    }
    if (n > 1)
        factorization.push_back(n) ;

    return factorization ;
}

void solve() {
    int n ; cin >> n ;
    vector <int> v = PrimeFactorization(n) ;

    for (int i : v) {
        cout << i << " " ;
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


