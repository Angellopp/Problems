#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--){
        char c[8][8];
        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cin >> c[i][j];
                if(c[i][j] != '.') {
                    cout << c[i][j];
                }
            }
        }
        cout << "\n";
    }
    return 0;
}