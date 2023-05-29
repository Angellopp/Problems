#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n; cin >> n;
    int a, b, c, d; cin >> a >> b >> c >> d;
    ll cnt = 0;
    for (int i = 1; i <= n; i++) {
        int s1 = b + i - c;
        int s2 = b + d + i - a - c;
        int s3 = d + i - a;
        if (1 <= s1 and s1 <= n and 1 <= s2 and s2 <= n and 1 <= s3 and s3 <= n){
            cnt++;
        }
    }
    cout << cnt * n;
    
}