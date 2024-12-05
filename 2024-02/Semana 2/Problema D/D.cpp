#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, sum = 0, cuantos_1 = 0, cuantos_2 = 0, mitad_suma;;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a;
        if(a == 1){
            cuantos_1++;
        } else if(a == 2){
            cuantos_2++;
        }
        nums[i] = a;
    }
    if((sum % 2) != 0){
        cout << "NO" << endl;
        return 0;
    } else{
        mitad_suma = sum/2;
        if((cuantos_1 == 0) && (mitad_suma % 2 != 0)){
            cout << "NO" << endl;
            return 0;
        }
        while (true) {
            if((cuantos_2 > 0) && (mitad_suma > 0) && (mitad_suma % 2 == 0)){
                if(mitad_suma - 2 >= 0){
                    cuantos_2 --;
                    mitad_suma -= 2;
                }
            } else if((cuantos_1 > 0) && (mitad_suma > 0)){
                if((mitad_suma - 1) >= 0){
                    cuantos_1 --;
                    mitad_suma -= 1;
                }
            }
            if(mitad_suma == 0){
                cout << "YES" << endl;
                return 0;
            }
        }
        if(mitad_suma == 0){
            cout << "YES" << endl;
            return 0;
        } else{
            cout << "NO" << endl;
            return 0;
        }
    }
}