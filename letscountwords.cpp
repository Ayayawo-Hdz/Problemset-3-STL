//CodeForces-102890L
#include <iostream>
#include <string>
#include <map>
#include <vector>
void doSome();

using namespace std;

void doSome() {
    int n, x = 0;
    
    cin >> n;
    string w;
    map<string, bool> words;
    
    while (n--) {
        cin >> w;
        if (n == 0) {cin.ignore(1, ' ');}
        bool exists = false;
        for (const auto& pair : words) {
            const string& word = pair.first;
            for (int i = 0; i < word.length(); ++i) {
                string rotated = word.substr(i) + word.substr(0, i);
                if (rotated == w) {exists = true; break;}
            }
            if (exists) {break;}
        }
        if (!exists) {words[w] = true; x++;}
    }
    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
