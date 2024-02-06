#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--){
        int c[27]{};
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < n; i++) {
            int j = 0;
            for (j = 0; j < 26; j++) {
                if (a[i] == c[j]) {
                    c[j]++;
                    break;
                }
            }
            cout << (char)('a'+ j);
        }
        cout << "\n";
        
    }
    return 0;
}