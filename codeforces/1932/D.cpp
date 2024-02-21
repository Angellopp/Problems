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
            map<char, vector <string>> m;
            for (int i = 0; i < 2*n; i++) {
                cin >> ss;
                m[ss[1]].emplace_back(ss);
            }
            int auxs = 0;
            for (auto& x : m) {
                sort(x.second.begin(), x.second.end());
                auxs += x.second.size()%2;
            }
            bool can = 1;
            auxs -= m[win].size()%2;
            if (m[win].size() < auxs) can = 0;
            if (can) {
                for (auto x : m) {
                    if(x.first != win) {
                        for (int i = 1; i < x.second.size(); i+=2) {
                            cout << x.second[i-1] << " " << x.second[i] << "\n";
                        }
                    }
                }
                int j = 0;
                for (auto x : m) {
                    if (x.first != win) {
                        if (x.second.size() and x.second.size() % 2) {
                            cout << x.second.back() << " " << m[win][j++] << "\n";
                        }
                    }
                }
                for (j; j < m[win].size(); j+=2) {
                    cout << m[win][j] << " " << m[win][j+1] << "\n";
                }
            }
            else {
                cout << "IMPOSSIBLE\n";
            }
        }
    }