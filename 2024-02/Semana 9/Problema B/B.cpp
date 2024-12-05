#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() > 10) {
            int contador = s.size() - 2;
            cout << s[0] << contador << s[s.size() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}