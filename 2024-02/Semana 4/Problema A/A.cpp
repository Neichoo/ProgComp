#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, cont_n = 0, cont_z = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        if (a == 'z'){
            cont_z++;
        } else if (a == 'n'){
            cont_n++;
        }
    }
    for(int i = 0; i < cont_n; i++){
        cout << "1 ";
    }
    for(int i = 0; i < cont_z; i++){
        cout << "0 ";
    }
    return 0;
}