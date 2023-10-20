#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    int tt; cin >> tt;
    while(tt--){
        cin >> a >> b >> c;
        int m = min(a,min(b,c));
        int sum = a + b + c - m;
        (sum >= 10)? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}