#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, steps;
    cin >> n;

    if (n % 5 == 0) {
        steps = n / 5;
        cout << steps << endl;
    } else {
        steps = (n / 5) + 1;
        cout << steps << endl;
    }

    return 0;
}
