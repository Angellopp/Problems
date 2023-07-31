#include <bits/stdc++.h>
#define long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n == 999)
        cout << 1;
    else if(n >= 1000)
        cout << 2 * (n % 3);
    else cout << n + 2;
    return 0;
}