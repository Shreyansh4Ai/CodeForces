#include <iostream>
#include <string>
using namespace std;

void swapFirstChar(string &a, string &b) {
    swap(a[0], b[0]);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        swapFirstChar(a, b);
        cout << a << " " << b << endl;
    }
    
    return 0;
}
