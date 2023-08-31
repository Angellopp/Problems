#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
using namespace std;

int main() {
    fast_io;
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        for(char c: s) {
            if (c == '7') {
                cout << "73\n";
                break;
            }
            else if (c == '3') {
                cout << "37\n";
                break;
            }
        }
    }
}