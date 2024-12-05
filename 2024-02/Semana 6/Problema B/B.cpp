#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, dist = INT_MAX;
    cin >> n >> m >> k;
    m--;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = m - 1; i >= 0; i--) {
        if (a[i] != 0 && a[i] <= k) {
            dist = min(dist, m - i);
            break;
        }
    }
    for (int i = m + 1; i < n; i++) {
        if (a[i] != 0 && a[i] <= k) { 
            dist = min(dist, i - m);
            break;
        }
    }
    cout << dist * 10 << endl;
    return 0;
}
