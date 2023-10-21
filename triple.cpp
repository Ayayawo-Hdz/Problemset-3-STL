//CodeForces-1669B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, counter, n, e, repi;
    vector<int> elements;

    cin >> rep;

    while (rep--) {
        bool selec = false;
        elements.clear();
        counter = 0;
        repi = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> e;
            elements.push_back(e);
            if (i != n - 1) {
                cin.ignore(1, ' ');
            }
        }
        sort(elements.begin(), elements.end());

        for (int i = 0; i < elements.size() - 1; i++) {
            if (elements[i] == elements[i + 1]) {
                counter++;
                if (counter >= 2) {
                    selec = true;
                    repi = elements[i];
                }
            } else {
                counter = 0;
            }
        }
        if (selec) {
            cout << repi << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
