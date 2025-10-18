

int main() {
    string remix;
    cin >> remix;

    string word;
    stringstream ss;
    for (size_t i = 0; i < remix.size(); ) {
        if (remix.substr(i, 3) == "WUB") {
            i += 3;
            if (!word.empty()) {
                ss << word << ' ';
                word.clear();
            }
        } else {
            word += remix[i++];
        }
    }
    if (!word.empty()) ss << word;

    string result = ss.str();
    if (!result.empty() && result.back() == ' ') result.pop_back();
    cout << result << endl;
    return 0;
}
