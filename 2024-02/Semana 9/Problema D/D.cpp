#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int contadorA = 0, contadorB = 0;
        for (char c : s) {
            if (c == 'A') {
                contadorA++;
            } else if (c == 'B') {
                contadorB++;
            }
        }
        if (contadorA > contadorB) {
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }
    return 0;
}