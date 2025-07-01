#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    string vowels = "aoyeuiAOYEUI";
    for (char c : s) {
        if (vowels.find(c) == string::npos) {
            cout << '.' << (char)tolower(c);
        }
    }
    return 0;
}
