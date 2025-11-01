#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int d = abs(a - b);
    int x = d / 2;
    int y = d - x;
    int tiredness = (x * (x + 1)) / 2 + (y * (y + 1)) / 2;
    cout << tiredness << endl;
    return 0;
}
