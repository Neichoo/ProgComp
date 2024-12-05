#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long total = 0;
 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total += a[i];
        }
        long long promedio = total / n;
        long long holgura = 0;
        bool posible = true;
        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                if (a[i] < promedio) {
                    cout << "NO" << endl;
                    posible = false;
                    break;
                } else if (a[i] > promedio) {
                    holgura += (a[i] - promedio);
                }
            } else {
                if (a[i] < promedio) {
                    long long deficit = promedio - a[i];
                    if (holgura < deficit) {
                        cout << "NO" << endl;
                        posible = false;
                        break;
                    } else {
                        holgura -= deficit;
                    }
                } else if (a[i] > promedio) {
                    holgura += (a[i] - promedio);
                }
            }
        }
        if (posible) {
            cout << (holgura == 0 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}