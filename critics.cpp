#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b, c;
    cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (a + b >= 10) {cout << "YES" << endl;} else
        if (b + c >= 10) {cout << "YES" << endl;} else
        if (a + c >= 10) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}
