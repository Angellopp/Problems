#include <iostream>
using namespace std;

int main() {
    int tt, n, a[200000];
    cin >> tt;
    while (tt--) {
        cin >> n;
        int mn = 1e9;
        for (int i= 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        int ind = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == mn) {
                ind = i;
                break;
            }
        }
        bool flag = true;
        for (int i = ind; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                flag = false;
                cout << "-1\n";
                break;
            }
        }
        if (flag) {
            cout << ind << "\n";
        }


    }
}