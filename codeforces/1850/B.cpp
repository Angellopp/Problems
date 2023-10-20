#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--){
        int n, i_max, max = 0; 
        cin >> n;
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            if(b[i] >= max and a[i] <= 10) {
                max = b[i];
                i_max = i+1;
            }
        }
        cout << i_max << "\n";
    }
    return 0;
}