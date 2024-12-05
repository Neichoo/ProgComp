#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    char a;
    set<char> s = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    cin >> t;
    while(t--){
      cin >> a;
      if(s.find(a) != s.end()){
        cout << "YES" << endl;
      } else{
        cout << "NO" << endl;
      }
    }
    return 0;
}