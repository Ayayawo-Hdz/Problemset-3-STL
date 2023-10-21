#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, a, b, c;

    cin >> rep;
    while (rep--) {
        cin >> a >> b >> c;
        if (b > c) {
            if (b >= a) {
                cout << b - a + 1;
            } else {
                cout << 0;
            }
        } else {
            if (c >= a) {
                cout << c - a + 1;
            } else {
                cout << 0;
            }
        }
        cout << " ";
        if (c > a) {
            if (c >= b) {
                cout << c - b + 1;
            } else {
                cout << 0;
            }
        } else {
            if (a >= b) {
                cout << a - b + 1;
            } else {
                cout << 0;
            }
        }
        cout << " ";
        if (a > b) {
            if (a >= c) {
                cout << a - c + 1;
            } else {
                cout << 0;
            }
        } else {
            if (b >= c) {
                cout << b - c + 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
    return 0;
}
