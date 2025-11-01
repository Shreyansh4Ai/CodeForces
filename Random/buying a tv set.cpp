#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// GCD function
ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    ll g = gcd(x, y);
    x /= g;
    y /= g;

    ll k = min(a / x, b / y);

    cout << k << "\n";
    return 0;
}
