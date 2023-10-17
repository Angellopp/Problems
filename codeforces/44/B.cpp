#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    for(int i = 0; i <= a; i+=2) {
        for(int j = 0; j <= b and i/2 + j <= n; j++) {
            if ((n - i/2 - j) % 2 == 0 and (n - i/2 - j) / 2 <= c){
                // cout << i << " " << j << " " << (n - i/2 - j) / 2 << endl;
                ans++;
                
            }
            
        }
    }
    cout << ans << "\n";
    
}