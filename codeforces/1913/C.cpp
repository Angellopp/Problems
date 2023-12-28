#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    int bitmap[29+5]{};
    int c, n;
    while (tt--) {
        cin >> c >> n;
        if (c == 1) {
            bitmap[30-n]++;
        }
        else {
            int bitaux[29+5];
            for (int i = 0; i < 31; i++) bitaux[i] = bitmap[i];
            
            // for(int i = 0; i < 31; i++) cout << bitaux[i] << " ";
            // cout << "\n";

            int aux = 0;
            for (int i = 1; i < 31; i++) {
                ((n>>(i-1)) & 1) ? aux = (bitaux[31-i] - 1) / 2 : aux = bitaux[31-i] / 2;
                bitaux[31-i] -= 2*aux;
                bitaux[30-i] += aux;
            }
            // for(int i = 0; i < 31; i++) cout << bitaux[i] << " ";
            // cout << "\n";
            bool b = true;
            for (int i = 1; i < 31; i++) {
                if (bitaux[31-i] < ((n>>(i-1)) & 1)) {
                    cout << "NO\n";
                    b = false;
                    break;
                }
            }
            if (b) cout << "YES\n";
            
            
        }
    }
}