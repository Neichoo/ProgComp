#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> k >> s;
        int minuto = 0;
        while(true) {
            bool cambia = false;
            for (int i = k - 2; i >= 0; i--) {
                if (s[i] == 'A' && s[i + 1] == 'P') {
                    s[i + 1] = 'A';
                    cambia = true;
                }
            }
            if (!cambia) {
                break;
            }
            minuto++;
        }
        cout << minuto << endl;
    }
    return 0;
}