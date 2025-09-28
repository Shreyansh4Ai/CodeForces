#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores;

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;

     
        int pos = 0;
        while (pos < (int)scores.size() && scores[pos] >= s) {
            pos++;
        }

       
        scores.insert(scores.begin() + pos, s);

        
        cout << pos + 1 << "\n";
    }

    
    for (int i = 0; i < (int)scores.size(); i++) {
        cout << scores[i] << (i + 1 == scores.size() ? '\n' : ' ');
    }

    return 0;
}
