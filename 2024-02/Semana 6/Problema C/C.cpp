#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;
    for(int i = 0; i < n; i ++){
        int a;
        cin >> a;
        maxheap.push(a);
        minheap.push(a);
    }
    for (int i = 0; i < n/2; i ++){
        maxheap.pop();
        minheap.pop();
    }
    cout << maxheap.top() << endl;
}