#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool iguales = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                iguales = false;
                break;
            }
        }
        if (iguales == true) {
            cout << "NO" << endl;
        } else {
            for (int i = 0; i < s.size(); i++) {
                for (int j = i + 1; j < s.size(); j++) {
                    if (s[i] != s[j]) {
                        swap(s[i], s[j]);
                        cout << "YES" << endl;
                        cout << s << endl;
                        break;
                    }
                }
                if (s[i] != s[i+1]){
                    break; 
                }
            }
        }
    }
    return 0;
}