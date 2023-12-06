#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int n = s.size();
        int cb = 0, cB = 0;
        string ans;
        for (int i = n-1; i >= 0; i--) {
            if(s[i] == 'b') {
                cb++;
            }
            else if(s[i] == 'B') {
                cB++;
            }
            else{
                if (islower(s[i])) {
                    if (cb == 0) {
                        ans += s[i];
                    }
                    else cb--;
                }
                else if (isupper(s[i])) {
                    if (cB == 0) {
                        ans += s[i];
                    }
                    else cB--;
                }

            }
        }
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << "\n";
    }
}