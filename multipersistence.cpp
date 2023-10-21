#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, n;
    vector<int> pers;
    cin >> rep;

    while (rep--) {
        int counter = 0;
        cin >> n;
        while (n > 9) {
            int temp = 1;
            do {
                temp *= n % 10;
                n /= 10;
            } while (n > 0);
            n = temp;
            counter++;
        }
        pers.push_back(counter);
    }
    for (int i = 0; i < pers.size(); i++) {
        cout << pers[i] << endl;
    }
    return 0;
}
