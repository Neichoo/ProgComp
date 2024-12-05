#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    string o1, o2;
    cin >> n;
    cin.ignore();
    if(n % 3 == 0){
        for(int i = n; i > 0; i--){
            o1 += "1";
        }
        cout << o1 << endl;
   } else if(n % 2 == 0){
        for(int i = n/2; i> 0; i--){
            o1 += "6";
        }
        for(int i = n/2; i> 0; i--){
            o2 += "9";
        }
        cout << o1 + o2 << endl;
    } else{
        o1 += "6";
        for(int i = n - 2; i > 0; i--){
            o1 += "1";
        }
        o1 += "9";
        cout << o1 << endl;
    }
}