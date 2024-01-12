#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n-2; i++) {
            cout << s[i];
            if (s[i] == 'a' or s[i] == 'e') {
                if (s[i+2] == 'a' or s[i+2] == 'e')
                    cout << ".";
            }
            else {
                if (s[i+1] == 'b' or s[i+1] == 'c' or s[i+1] == 'd')
                    cout << ".";
            }
        }
        cout << s[n-2] << s[n-1];
        cout << "\n";
    }
}