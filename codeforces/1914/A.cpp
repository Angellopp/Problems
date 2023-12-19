#include <bits/stdc++.h>
using namespace std;
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n; 
        cin >> n;
        string s;
        cin >> s;
        int min[26]{};
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int aux = s[i] - 'A';
            min[aux]++;
            if(min[aux] == aux + 1) cnt ++;
        }
        cout << cnt << "\n";

    }
}