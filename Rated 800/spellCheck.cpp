#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string target = "Timur";

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        sort(s.begin(), s.end());
        string sorted_target = target;
        sort(sorted_target.begin(), sorted_target.end());

        if (n == 5 && s == sorted_target) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
