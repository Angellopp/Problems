    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main(){
        cin.tie(nullptr)->sync_with_stdio(false);
        int tt;
        cin >> tt;
        while (tt--) {
            int n;
            cin >> n;
            char win;
            cin >> win;
            string ss;
            vector <string> C, D, H, S;
            for (int i = 0; i < 2*n; i++) {
                cin >> ss;
                if (ss[1] == 'C') C.emplace_back(ss);
                if (ss[1] == 'D') D.emplace_back(ss);
                if (ss[1] == 'H') H.emplace_back(ss);
                if (ss[1] == 'S') S.emplace_back(ss);
            }
            sort(C.begin(), C.end());
            sort(D.begin(), D.end());
            sort(H.begin(), H.end());
            sort(S.begin(), S.end());
            int c = C.size(), d = D.size(), h = H.size(), s = S.size();
            int auxs = c%2 + d%2 + h%2 + s%2;
            bool can = 1;
            if (win == 'C') {
                auxs -= c%2;
                if(c < auxs) can = 0;
            }
            if (win == 'D') {
                auxs -= d%2;
                if(d < auxs) can = 0;
            }
            if (win == 'H') {
                auxs -= h%2;
                if(h < auxs) can = 0;
            }
            if (win == 'S') {
                auxs -= s%2;
                if(s < auxs) can = 0;
            }
            if (can) {
                if (win != 'C') {
                    for (int i = 1; i < c; i+=2) {
                        cout << C[i-1] << " " << C[i] << "\n";
                    }
                }
                if (win != 'D') {
                    for (int i = 1; i < d; i+=2) {
                        cout << D[i-1] << " " << D[i] << "\n";
                    }
                }
                if (win != 'H') {
                    for (int i = 1; i < h; i+=2) {
                        cout << H[i-1] << " " << H[i] << "\n";
                    }
                }
                if (win != 'S') {
                    for (int i = 1; i < s; i+=2) {
                        cout << S[i-1] << " " << S[i] << "\n";
                    }
                }
                if (win == 'C') {
                    int j = 0;
                    if (d % 2) cout << D.back() << " " << C[j++] << "\n";
                    if (h % 2) cout << H.back() << " " << C[j++] << "\n";
                    if (s % 2) cout << S.back() << " " << C[j++] << "\n";
                    for (j; j < c; j+=2) {
                        cout << C[j] << " " << C[j+1] << "\n";
                    }
                }
                if (win == 'D') {
                    int j = 0;
                    if (c % 2) cout << C.back() << " " << D[j++] << "\n";
                    if (h % 2) cout << H.back() << " " << D[j++] << "\n";
                    if (s % 2) cout << S.back() << " " << D[j++] << "\n";
                    for (j; j < d; j+=2) {
                        cout << D[j] << " " << D[j+1] << "\n";
                    }
                }
                if (win == 'H') {
                    int j = 0;
                    if (c % 2) cout << C.back() << " " << H[j++] << "\n";
                    if (d % 2) cout << D.back() << " " << H[j++] << "\n";
                    if (s % 2) cout << S.back() << " " << H[j++] << "\n";
                    for (j; j < h; j+=2) {
                        cout << H[j] << " " << H[j+1] << "\n";
                    }
                }
                if (win == 'S') {
                    int j = 0;
                    if (c % 2) cout << C.back() << " " << S[j++] << "\n";
                    if (d % 2) cout << D.back() << " " << S[j++] << "\n";
                    if (h % 2) cout << H.back() << " " << S[j++] << "\n";
                    for (j; j < s; j+=2) {
                        cout << S[j] << " " << S[j+1] << "\n";
                    }
                }
                
            }
            else {
                cout << "IMPOSSIBLE\n";
            }

        }
    }