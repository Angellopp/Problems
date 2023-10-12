#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >>tt;
    while (tt--) {
        long long a, b ,c ;
        cin >> a >> b >> c;
        long long mi = min(min(a,b),c);
        long long ma = max(max(a,b),c);
        long long sum = a + b + c;
        bool ans = false;
        if (sum % 3 == 0) {
            if(sum % 2 == 0) {
                if (mi >= sum / 6 and !(a%(sum/6)) and !(b%(sum/6)) and !(c%(sum/6))) ans = true;
            }
            else {
                if (mi >= sum / 3 and !(a%(sum/3)) and !(b%(sum/3)) and !(c%(sum/3))) ans = true;
            }
        }
        if (sum % 4 == 0) {
            if (mi >= sum / 4 and !(a%(sum/4)) and !(b%(sum/4)) and !(c%(sum/4))) ans = true;
        }
        if (sum % 5 == 0) {
            if (mi >= sum / 5 and !(a%(sum/5)) and !(b%(sum/5)) and !(c%(sum/5))) ans = true;
        }
        (ans) ? cout << "YES\n" : cout << "NO\n";
        
        
    }
}