#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 10 == 0) {
        cout << n << endl;
    } else {
        int down = n - (n % 10);
        int up = n + (10 - n % 10);
        // Choose the one with smaller absolute difference
        if (n - down <= up - n)
            cout << down << endl;
        else
            cout << up << endl;
    }

    return 0;
}
