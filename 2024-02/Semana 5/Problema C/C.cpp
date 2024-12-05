#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int largo, ancho;
    cin >> largo >> ancho; 
    vector<vector<char>> tablero(largo, vector<char>(ancho));
    
    for (int i = 0; i < largo; ++i) {
        for (int j = 0; j < ancho; ++j) {
            cin >> tablero[i][j];
        }
    }
    
    int fila_min = largo, fila_max = -1, col_min = ancho, col_max = -1;
    
    for (int i = 0; i < largo; ++i) {
        for (int j = 0; j < ancho; ++j) {
            if (tablero[i][j] == 'B') {
                fila_min = min(fila_min, i);
                fila_max = max(fila_max, i);
                col_min = min(col_min, j);
                col_max = max(col_max, j);
            }
        }
    }
    
    int fila_centro = (fila_min + fila_max) / 2 + 1;
    int col_centro = (col_min + col_max) / 2 + 1;
    
    cout << fila_centro << " " << col_centro << endl;
    
    return 0;
}