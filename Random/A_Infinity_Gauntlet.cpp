#include <iostream>
#include <string>
using namespace std;

int main() {
    // Define gem colors and their corresponding names
    string colors[6] = {"purple", "green", "blue", "orange", "red", "yellow"};
    string names[6]  = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
    bool hasGem[6] = {false};  // Track which gems are present

    int n;
    cin >> n;
    cin.ignore(); // Clear newline after reading n

    for (int i = 0; i < n; ++i) {
        string color;
        getline(cin, color); // Read full line to avoid input issues
        for (int j = 0; j < 6; ++j) {
            if (color == colors[j]) {
                hasGem[j] = true;
                break;
            }
        }
    }

    int missing = 0;
    for (int i = 0; i < 6; ++i) {
        if (!hasGem[i]) ++missing;
    }

    cout << missing << endl;
    for (int i = 0; i < 6; ++i) {
        if (!hasGem[i]) {
            cout << names[i] << endl;
        }
    }

    return 0;
}