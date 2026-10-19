#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Dragon{ 
    int x, y;
    bool operator<(const Dragon &o) const { return x < o.x; }
};

int main() {
    int s, n;
    cin >> s >> n;
    vector<Dragon> dragons(n);
    for(int i = 0; i < n; i++) cin >> dragons[i].x >> dragons[i].y;
    sort(dragons.begin(), dragons.end());
    for(auto &d : dragons){
        if(s <= d.x) { cout << "NO"; return 0; }
        s += d.y;
    }
    cout << "YES";
    return 0;
}