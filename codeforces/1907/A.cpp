#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        for (int i = 1; i < 9; i++) {
            if(i != (s[1]-'0'))
            cout << s[0] << i << "\n";     
        }
        char a = 'a';
        for (int i = 0; i < 8; i++) {
            if(s[0] != (char)('a'+i))
                cout << (char)(a+i) << s[1] << "\n";     
        }

    }
}