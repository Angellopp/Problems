#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
 
using namespace std;

vector<int> primos; 

vector<int> criba_eratostenes(int n) {
    vector<bool> es_primo(n + 1, true);
    // vector<int> primos;

    for (int p = 2; p * p <= n; p++) {
        if (es_primo[p]) {
            for (int i = p * p; i <= n; i += p) {
                es_primo[i] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (es_primo[i]) {
            primos.push_back(i);
        }
    }

    return primos;
}
 
int main() {
    fast_io;
    int tt;
    cin >>tt;
    criba_eratostenes(1000);
    while (tt--) {
        int n;
        bool ste = true;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n;i++) {
            cin >> v[i];
        }
        for (int p:primos){
            int ans = 0;
            for (int i=0; i<n;i++) {
                while(v[i] % p == 0) {
                    ans++;
                    v[i] /= p;
                }
            }
            if (ans % n != 0) {
                
                ste = false; break;
            }
        }
        int v0 = v[0];
        for (int i:v){
            if(i != v0){
                ste = false; break;
            }
        }
        
        (ste)? cout << "YES\n" : cout << "NO\n";
        
        
    }
}