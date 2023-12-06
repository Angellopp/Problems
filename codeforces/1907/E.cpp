#include <iostream>
#define ll long long
using namespace std;
int a[11] = {1,3,6,10,15,21,28,36,45,55};

// int sumaDeCifras(int n) {
//     int suma = 0;
//     while(n > 0){
//         suma += n % 10;
//         n /= 10;
//     }
//     return suma;
// }

ll ans(ll n) {
    if(n<=9) return a[n];
    return a[n % 10] * 1LL * ans(n/10);
}

int main(){
    int tt; cin >> tt;
    // for(int n = 0; n <= 200; n+=10) {
    //     // int n ;
    //     long long int cont = 0;
    //     for (int i = 0; i <= n; i++) {
    //         for(int j = 0; i+j <= n; j++) {
    //             if((sumaDeCifras(i) + sumaDeCifras(j) + sumaDeCifras(n-i-j)) == sumaDeCifras(n)) {
    //                 // cout << i << " " << j << endl;
    //                 cont++;
    //             }
    //         }
    //     }
    //     cout << n << ": " << cont << endl;
    // }
    while (tt--) {
        ll n;
        cin >> n;
        // if(n == 10000000) cout << 3 << "\n";
        cout << ans(n) << "\n";
    }
}