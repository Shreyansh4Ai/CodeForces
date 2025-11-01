#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> k >> s;

        int maxDelay = 0, currentDelay = 0;
        bool foundAngry = false;

        for (char ch : s) {
            if (ch == 'A') {
                foundAngry = true;
                currentDelay = 0;
            } else if (foundAngry && ch == 'P') {
                currentDelay++;
                maxDelay = max(maxDelay, currentDelay);
            }
        }

        cout << maxDelay << endl;
    }
    return 0;
}
