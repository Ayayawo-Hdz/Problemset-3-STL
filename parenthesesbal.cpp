//UVA-673
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    bool temp;
    string par;
    vector<string> resp;

    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, par);
        stack<char> dip;
        for (int i = 0; i < par.size(); i++) {
            if (par[i] == '[' || par[i] == '(') {
                dip.push(par[i]);
            } else if (!dip.empty()) {
                if ((dip.top() == '[' && par[i] == ']') || (dip.top() == '(' && par[i] == ')')) {
                    dip.pop();
                } else {
                    dip.push(par[i]);
                }
            } else {dip.push(par[i]);}
        }
        if (dip.empty()) {temp = true;} else {temp = false;}
        if (temp) {resp.push_back("Yes");} else {resp.push_back("No");}
    }
    for (int i = 0; i < resp.size(); i++) {cout << resp[i] << endl;}

    return 0;
}
