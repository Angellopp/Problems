#include <iostream>
using namespace std;

int main() {
    int tt, n, k, dpa[102]{} ,dpb[103]{};
    string s;
    cin >> tt;
    while (tt--) {
        cin >> n >> k;
        cin >> s;
        int cb = 0;
        for (int i = 1; i <= n; i++) {
            dpa[i] = dpa[i-1] + (s[i-1] == 'A');
            dpb[i] = dpb[i-1] + (s[i-1] == 'B');
            if(s[i-1] == 'B') cb++;
        }
        if (cb == k) {
            cout << "0\n"; continue;
        }
        cout << "1\n";
        if (cb < k) {
            for (int i = 0; i <= n; i++) {
                if (dpa[i] == k - cb) {
                    cout << i << " B\n";
                    break;
                }
            }
        }
        else {
            for (int i = 0; i <= n; i++) {
                if (dpb[i] == cb - k) {
                    cout << i << " A\n";
                    break;
                }
            }

        }
    }
}