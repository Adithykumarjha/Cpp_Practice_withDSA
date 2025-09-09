#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> calculateSpan(vector<int>& arr) {

    int n = arr.size(); 
    vector<int> span(n);  
    stack<int> stk;  

    for (int i = 0; i < n; i++) {
        while (!stk.empty() && arr[stk.top()] <= arr[i]) {
            stk.pop();
        }
        if (stk.empty()) {
            span[i] = (i + 1);
        }
        else {
            span[i] = (i - stk.top());
        }

        stk.push(i);
    }

    return span;
}

int main() {
    vector<int> arr = {10, 4, 5, 90, 120, 80};
    vector<int> span = calculateSpan(arr);
     for (int x : span) {
        cout << x << " ";
    }
    return 0;
}
