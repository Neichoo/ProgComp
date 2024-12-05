#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool r_primero = false, m_primero = false;
    for(int i = 0; i < s.size(); i++){
        if((s[i] == 'R') && (m_primero == false)){
            r_primero = true;
            cout << "Yes" << endl;
            return 0;
        } else if((s[i] == 'M') && (r_primero == false)){
            m_primero = true;
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}