#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    string s;
    while (tt--) {
        cin >> s;
        int n = s.size();
        int a[2]{}, ans = 0;
        for (int i = 0; i < n; i++) {
            a[s[i]-'0']++;
        }
        if (a[0] == a[1]) {
            cout << "0\n";
            continue;
        }
        int i = 0;
        while ((a[0] >= 0 and a[1] >= 0) and i < n) {
            a[1 - (s[i]-'0')]--;
            i++;
        }
        cout << n - i +1<< "\n";
    }
}