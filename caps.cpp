#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string s; cin >> s;
    if(all_of(s.begin() + 1, s.end(), ::isupper)){
        for(char &c : s) c = isupper(c) ? tolower(c) : toupper(c);
    }
    cout << s;
    return 0;
}