#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l = 0, r = 0,  cont = 0;
    long long x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v[i] = a;
    }
    int suma = v[0];
    while (r < n) {
        if (suma == x) {
            cont++;
            r++;
            if (r < n) suma += v[r];
        } else if (suma < x) {
            r++;
            if (r < n) suma += v[r];
        } else { 
            suma -= v[l];
            l++;
        }
    }
    cout << cont << endl;
    return 0;
}