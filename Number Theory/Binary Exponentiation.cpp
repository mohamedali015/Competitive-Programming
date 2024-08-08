#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false) ;cin.tie(nullptr) ;
#define ll long long
//#define int long long
using namespace std ;

const int mod = 1e9 + 7 ;
ll binaryExponentiation (ll a, ll b) {         // a ^ b  and b > 10 ^ 8
    ll result = 1 ;

    while (b > 0) {
        if (b % 2 == 1)   //        b is odd    =>  a * (a^2)^ b/2
            result = (result * a) % mod;

        a = (a * a) % mod ;       // b is even  =>  (a^2)^ b/2
        b /= 2 ;
    }
    return result ;
}

void solve () {

}
int main() {
    fast

    cout << binaryExponentiation(2, 12) ;
    return 0;
}

