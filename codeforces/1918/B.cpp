#include <bits/stdc++.h>
#define ll long long
const int MAXN = 2*1e5+2;
using namespace std;

vector<int> v1(MAXN), v2(MAXN);
map <int, int> m1, m2;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n, aux;
        cin >> n;
        vector<bool> b1(n+1, 0), b2(n+1, 0);
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        for (int i = 0; i < n; i++) {
            m1[v1[i]] = v2[i];
            m2[v2[i]] = v1[i];
        }
        int val = n;
        int i = n-1;
        while (i >= 0) {
            if (b1[val] == 0 and b2[m1[val]] == 0) {
                v1[i] = val;
                v2[i] = m1[val];
                b1[val] = 1;
                b2[m1[val]] = 1;
                i--;
            }
            if (b2[val] == 0 and b1[m2[val]] == 0) {
                v1[i] = m2[val];
                v2[i] = val;
                b1[m2[val]] = 1;
                b2[val] = 1;
                i--;
            }
            if (b1[val] and b1[val]) val--;
        }
        for (int i = 0; i < n; i++)
            cout << v1[i] << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << v2[i] << " ";
        cout << "\n";
    }
    return 0;
}