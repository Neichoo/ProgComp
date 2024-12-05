#include <bits/stdc++.h>
using namespace std;
 
int main(){
    priority_queue<char, vector<char>, greater<char>> minheap;
    string input, output = "";
    cin >> input;
    int tam;
    for(char c : input){
        if(c != '+'){
            minheap.push(c);
        }
    }
    tam = minheap.size();
    for(int i = 0; i < tam; i++){
        output += minheap.top();
        output += '+';
        minheap.pop();
    }
    output.pop_back();
    cout << output << endl;
    return 0;
}