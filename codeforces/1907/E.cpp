#include <iostream>
#define ll long long
using namespace std;
int a[11] = {1,3,6,10,15,21,28,36,45,55};
ll ans(ll n) {
    if(n<=9) return a[n];
    return a[n % 10] * 1LL * ans(n/10);
}

int main(){
    int tt; cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        cout << ans(n) << "\n";
    }
}