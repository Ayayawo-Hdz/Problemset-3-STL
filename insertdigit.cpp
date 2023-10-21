#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, d;
        long long index = 0;
        string digits;
        cin >> n >> d;
        cin >> digits;
        for (int i = 0; i < digits.size(); i++) {
            if (index == 0) {
                if (d > (((int)digits[i]) - 48)) {cout << d << digits[i]; index++;} else {cout << digits[i];}
            } else {cout << digits[i];}
        }
        if (index == 0) {cout << d;} cout << endl;
    }

    return 0;
}
