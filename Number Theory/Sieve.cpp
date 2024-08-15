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

const int N = 1e6 + 6 ;
vector <bool> isPrime (N, true);
vector<int> Sieve () {
    isPrime[0] = isPrime[1] = false ;

    for (int i = 2; i * i < N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i ; j < N; j += i) {
                isPrime[j] = false ;
            }
        }
    }

    vector <int> primes ;
    for (int i = 2; i < N; ++i) {
        if (isPrime[i])
            primes.push_back(i) ;
    }

    return primes ;
}
void solve() {
    vector <int> primes = Sieve() ;

    for (int i : primes) {
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

