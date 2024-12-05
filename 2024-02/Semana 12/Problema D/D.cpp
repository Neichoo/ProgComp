#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    long long sum = 0, cada_tercio, sum_ac = 0, cont_primer_tercio = 0, formas = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v[i] = a;
    }
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    if((sum % 3) != 0){
        cout << 0 << endl;
        return 0;
    }
    cada_tercio = sum / 3;
    for (int i = 0; i < n - 1; i++){
        sum_ac += v[i];
        if(sum_ac == (2 * cada_tercio)){
            formas += cont_primer_tercio;
        }
        if(sum_ac == cada_tercio){
            cont_primer_tercio++;
        }
    }
    cout << formas << endl;
    return 0;
}