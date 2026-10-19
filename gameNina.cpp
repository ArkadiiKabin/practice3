#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int k, q; cin >> k >> q;
        vector<int> v(k);
        vector<int> queries(q);
        for(int i = 0; i < k; i++) cin >> v[i];
        for(int i = 0; i < q; i++) cin >> queries[i];
        for(int i = 0; i < q; i++){
            int n = queries[i];
            while(n >= v[0]){
                int remove_count = 0;
                for(int j = 0; j < k; j++){
                    if(v[j] <= n) remove_count++;
                    else break;
                }
                if(remove_count == 0) break;
                n-= remove_count;
            }
            cout << n << ' ';
        }
        cout << endl;
    }
    return 0;
}