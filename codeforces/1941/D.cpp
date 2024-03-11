
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
            int n, m , x;
            cin >> n >> m >> x;
            vector <vector<int>> v(m + 1, vector<int>(n));
            // for (int i = 0; i < m+1; i++) {
            //     for (int j = 0; j < n; j++) {
            //         v[i][j] = 0;
            //     }
            // }
            v[0][x-1] = 1;
            for (int i = 1; i <= m; i++) {
                int a; 
                cin >> a;
                char b;
                cin >> b;
                for (int j = 0; j < n; j++) {
                    if (v[i-1][j] == 1) {
                        if (b == '0') {
                            v[i][(j+a) % n] = 1;
                        }
                        if (b == '1') {
                            v[i][(j-a+n) % n] = 1;
                        }
                        if (b == '?') {
                            v[i][(j-a+n) % n] = 1;
                            v[i][(j+a+n) % n] = 1;
                        }
                    }
                }
            }
            int ans = 0;
            for (int i = 0; i < n; i++) {
                // d
                if (v[m][i] == 1) ans++;
                // }
            }
            cout << ans << nn;
            for (int i = 0; i < n; i++) {
                // d
                if (v[m][i] == 1) cout << i+1 << " ";
                // }
            }
            cout << nn;
        }
        return 0;
    }