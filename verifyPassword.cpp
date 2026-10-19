#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string password; cin >> password;
        bool is_valid = true;
        for(int i = 0; i < n - 1; i++){
            if(std::islower(password[i]) && std::isdigit(password[i + 1])){
                is_valid = false;
                break;
            }
        }
        if(is_valid) {
            string sorted_password = password;
            sort(sorted_password.begin(), sorted_password.end());
            if(sorted_password != password) {
                is_valid = false;
            }
        }
        cout << (is_valid ? "YES" : "NO") << endl;
    }
    return 0;
}