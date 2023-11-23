#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0), cin.tie(0);
    int tt; cin >> tt;
    int n, m, k;
    while (tt--) {
        cin >> n >> m >> k;
        if (((n + m) % 2 != k % 2) or (k < (n + m - 2))) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m - 1; j++) {
                if (i == 0)
                    ((i+j) % 2) ? cout << "R " : cout << "B ";
                else if (((k - m - n + 2) % 4 == 2 and n % 2 == 1) || ((k - m - n + 2) % 4 == 0 and n % 2 == 0))
                    cout << "R ";
                else 
                    cout << "B ";
            }
            cout << "\n";
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m; j++) {
                if (j == m-1 and i != n-2)
                    ((i+j) % 2) ? cout << "R " : cout << "B ";
                else if (((k - m - n + 2) % 4 == 2 and n % 2 == 1) || ((k - m - n + 2) % 4 == 0 and n % 2 == 0))
                    cout << "B ";
                else 
                    cout << "R ";
            }
            cout << "\n";
        }
        
    }
}