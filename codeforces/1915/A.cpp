#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a ^b^c) << "\n";
    }
}