#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A;
    cin >> A;

    long long min_perimeter = LLONG_MAX;

    for (long long i = 1; i * i <= A; ++i) {
        if (A % i == 0) {
            long long w = i;
            long long h = A / i;
            long long perimeter = 2 * (w + h);
            if (perimeter < min_perimeter) {
                min_perimeter = perimeter;
            }
        }
    }

    cout << min_perimeter << endl;
    return 0;
}
