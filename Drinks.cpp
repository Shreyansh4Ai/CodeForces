#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    double sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
        sum += p[i];
    }

    double average = sum / n;

    cout << fixed << setprecision(12) << average << endl;
    return 0;
}
