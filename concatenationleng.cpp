//UVA-10887
#include <bits/stdc++.h>
void doSome();

using namespace std;
#define endl '\n'

void doSome() {
    int t, c = 1;
    
    cin >> t;
    cin.ignore();
    while (t--){
        int m, n, com = 0;
        map<string, int> words;
        
        cin >> m >> n;
        cin.ignore();
        string st1[m], st2[n];
        
        for (int i = 0; i < m; i++) {getline(cin, st1[i]);}
        for (int i = 0; i < n; i++) {getline(cin, st2[i]);}
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {words[st1[j] + st2[k]]++;}
        }
        cout << "Case " << c << ": " << words.size() << endl; c++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    doSome();
    
    return 0;
}
