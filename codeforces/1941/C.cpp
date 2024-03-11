
    #include <bits/stdc++.h>
    #define ll long long
    #define F first
    #define S second
    #define nn '\n'
    #define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
    #define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
    #define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
    #define dbg(n) cout << "<[" << #n << "] = " << n << ">" << nn
    using namespace std;

    int main() {
        fast_io;
        int tt;
        cin >> tt;
        while (tt--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int ans = 0;
            for (int i = 0; i < n - 2; i++) {
                if(s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p') {
                    ans ++;
                }
                if(s[i] == 'p' and s[i+1] == 'i' and s[i+2] == 'e') {
                    ans ++;
                }
                
            }
            for (int i = 0; i < n - 4; i++) {
                if(s[i] == 'm' and s[i+1] == 'a' and s[i+2] == 'p' and s[i+3] == 'i' and s[i+4] == 'e') {
                    ans--;
                }
            }
            cout << ans << "\n";
        }
        return 0;
    }