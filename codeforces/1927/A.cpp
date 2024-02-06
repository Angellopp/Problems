#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int inicio = 0, fin = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                inicio = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == 'B') {
                fin = i;
                break;
            }
        }
        cout << fin - inicio + 1 << "\n";
    }
    return 0;
}