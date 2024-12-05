#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int num_aux, num_l, ud_i, ud2_i;
    string numero,ud, ud2;
    cin >> numero;
    num_l = numero.length();
    ud = numero.back();
    ud_i = stoi(ud);
    numero.pop_back();
    if(num_l>1){
        ud2 = numero.back();
        ud2_i = stoi(ud2);
    }
    if((ud2_i == 9) && (ud_i > 5)){
        cout << stoi(numero) + 1 << "0" << endl;
    } else if((num_l == 1) && (ud_i > 5)){
        cout << "10" << endl;
    }else if(ud_i <= 5){
        cout << numero << "0" << endl;
    } else{
        numero.pop_back();
        num_aux = ud2_i + 1;
        cout << numero << num_aux << "0" << endl;
    }
 
 
    return 0;
}