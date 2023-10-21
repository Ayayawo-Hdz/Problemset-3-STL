#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, div;
    cin >> n;

    div = n / 10;
    div /= 10;
    if (n % 10 == div) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
