#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string notas;
        cin >> notas;
        priority_queue<char> maxHeap;
        for (char c : notas) maxHeap.push(c);
        char maxChar = maxHeap.top();
        int position = maxChar - 'a' + 1;
        cout << position << endl;
    }
    return 0;
}