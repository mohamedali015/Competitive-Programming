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

ll gcd (ll a, ll b) {
    if (a == 0 or b == 0)
        return a + b ;
    else
        return gcd (min(a, b), max(a, b) % min(a, b)) ;
}

ll lcm (ll a, ll b) {
    return a / gcd(a, b) * b ;
}


void solve() {
    cout << lcm(3, 2) ;
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

