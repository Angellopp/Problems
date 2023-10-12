#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >>tt;
    while (tt--) {
        int n, m, ans = 0;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        auto found = x.find(s);
        while(x.size()< m) {
            x = x + x;
            ans ++;
        }
        found = x.find(s);
        if (found != std::string::npos) {
            cout << ans << "\n";
        }
        else {
            x = x + x;
            ans++;
            found = x.find(s);
            if (found != std::string::npos) {
                cout << ans << "\n";
            }
            else cout<< "-1\n";
            
        }
        
    }
}