    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    void sumar(string& s, int sum, int j) {
        int i = s.size() - 1 - j;
        for (i; i >= 0; i--) {
            sum += (s[i] -'0');
            if(sum >= 10) {
                s[i] = (sum) % 10 + '0';
                sum = (sum) / 10;
            }
            else {
                s[i] = (sum) + '0';
                break;
            }
        }
        // cout << "sum: " << sum << "\n";
        if (sum >= 1 and i == -1) s = '1' + s;
    }

    int main(){
        cin.tie(nullptr)->sync_with_stdio(false);
        int tt;
        cin >> tt;
        while (tt--) {
            int n;
            cin >> n;
            string s;
            cin >> s;
            int sum = 0;
            string ans = "";
            bool can = 1;
            for(int i = 0; i < n; i++) {
                if (s[i] == '0') {
                    if (!can) ans += s[i];  
                }
                else {
                    ans += s[i];
                    can = 0;
                }
            }
            for (int i = 0; i < n-1; i++) {
                sum += (s[i] - '0');
            }
            // sumar(ans, sum);
            for (int i = n-2; i >= 0; i--) {
                sumar(ans, sum, n-2-i);
                sum -= (s[i] - '0');
            }
            cout << ans << "\n";
        }
    }