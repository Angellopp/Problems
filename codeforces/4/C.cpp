#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    map <string, int> m;
    while (n--) {
        cin >> s;
        if (m[s] == 0) {
            cout << "OK\n";
            m[s] = 1;
        }
        else {
            cout << s << m[s]++ << "\n";
        }
    }

}