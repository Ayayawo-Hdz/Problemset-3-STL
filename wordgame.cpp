#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n, counter = 0;
    cin >> t;

    while (t--) {
        int points[3] = {0, 0, 0};
        cin >> n;
        vector<unordered_set<string>> words(3);
        map<string, int> freq;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word;
                cin >> word;
                if (j != n - 1) {cin.ignore(1, ' ');}
                words[i].insert(word);
                freq[word]++;
            }
        }
        for (int i = 0; i < 3; i++) {
            for (const auto& word : words[i]) {
                if (freq[word] == 1) {points[i] += 3;} else
                if (freq[word] == 2) {points[i] += 1;}
            }
        }
        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
