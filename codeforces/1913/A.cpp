#include <bits/stdc++.h>
using namespace std;
int numcifras (int n) {
    int ans = 0;
    while (n) {
        n /= 10;
        ans++;
    }
    return ans;
}


int main() {
    int tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        int num = numcifras(n);
        bool find = false;
        for (int i = 0; i < num; i++) {
            int aux1 = n / (int)pow(10,num-i-1);
            int aux2 = n % (int)pow(10,num-i-1);
            // cout <<aux1 << " " << aux2 << endl;
            if (numcifras(aux1) + numcifras(aux2) == num and aux1 < aux2) {
                cout << aux1 << " " << aux2 << "\n";
                find = true;
                break;
            }
        }
        if(!find) cout << "-1\n";
    }
}