#include <bits/stdc++.h>
#define long long ll;

using namespace std;

int fact (int a) {
    int ans = 1;
    while (a) {
        ans *= a--;
    }
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;
    a = min(a, b);
    cout << fact(a);
    return 0;
}