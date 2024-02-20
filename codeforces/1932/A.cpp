#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        bool can = 1;
        for(int i = 0; i < s.size() - 1 ; i++) {
            if(s[i] == '@') ans ++;
            if(s[i] == '*' and s[i+1] == '*') {
                can = 0; 
                break;
            }
        }
        if(s[s.size() - 1] == '@' and can) ans ++;
        cout << ans << "\n";
    }   
}