#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k;
    int posible_resultado = -1;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> minq;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        minq.push(a);
    }
    for(int i = 0; i < n; i ++){
        if(k > 0){
            if(i == (k-1)){
                posible_resultado = minq.top();           
                minq.pop();
            } else if(i == k){
                if(minq.top() == posible_resultado){
                    cout << -1 << endl;
                    return 0;
                } else {
                    cout << posible_resultado << endl;
                    return 0;
                }
            } else{
                minq.pop();
            }
        } else{
            posible_resultado = minq.top();
            if((k == 0) && (posible_resultado > 1)){
                cout << 1 << endl;
                return 0;
            } else if((k == 0) && (posible_resultado <= 1)){
                cout << -1 << endl;
                return 0;
            }
        }
    }
    cout << posible_resultado << endl;
    return 0;
}