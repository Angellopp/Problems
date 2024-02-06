#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--){
        int n, k;
        cin >> n >> k;
        vector <int> v(n+1);

        int val = 1;
        int aux = 0;
        for (int i = 1; i <= k; i++) {
            if(i % 2 == 1) {
                if(i!=1) val = aux; 
                for (int j = i; j <= n; j+=k) {
                    v[j] = val;
                    val++;
                }
            } 
            else {
                val = val + ((n-i) / k);
                aux = val+1;
                // cout << "val: " << val << "\n";
                for (int j = i; j <= n; j+=k) {
                    v[j] = val;
                    val--;
                }
            }
        }
        for (int i =1; i <= n; i++) {
            cout << v[i] << " ";
        }cout << "\n";
    }
    return 0;
}