#include <bits/stdc++.h>
 
using namespace std;
int main(){
    string linea;
    int n, aux;
    long long o = 0, o_aux = 0;
    vector<int> lista;
    cin >> n;
    cin.ignore();
    getline(cin, linea);
    istringstream inputs(linea);
    for(int i = 0; i < n; i++){
        inputs >> aux;
        lista.push_back(aux);
    }
    sort(lista.begin(), lista.end());
    for(int i = 0; i < n/2; i++){
        o_aux = lista[i] + lista[n - i - 1]; 
        o += (o_aux * o_aux);
    }
    cout << o << endl;
}