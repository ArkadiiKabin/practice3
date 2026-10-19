#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
        while(t--){
        int n; cin >> n;
        priority_queue<int> v;
        for(int i = 1; i <= n; i++){
            v.push(i);
        }
        cout << 2 << endl;
        while(v.size() > 1){
            int largest = v.top(); v.pop();
            int second_largest = v.top(); v.pop();
            cout << largest << ' ' << second_largest << endl;
            int new_value = ceil((largest + second_largest) / 2.0);
            v.push(new_value);
        }
    }
    return 0;
}