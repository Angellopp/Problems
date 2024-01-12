#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt;
    cin >> tt;
    string s = "ABC";
    while (tt--) {
        char v[3][3];
        int ans = 0 ^ 1 ^ 2, fila;
        for (int i = 0; i < 3;i++) {
            for (int j = 0; j < 3; j++) {
                cin >> v[i][j];
                if (v[i][j] == '?') {
                    fila = i;
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            if (v[fila][i] != '?') {
                ans ^=( v[fila][i] - 'A');
            }
        }
        cout << s[ans] << "\n";
    }
}