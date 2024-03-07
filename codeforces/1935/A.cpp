#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
#define dbug(n) cout << "<[" << #n << "] = " << n << ">" << nn
using namespace std;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if (s1 <= s2) {
            if (n % 2 == 0) cout << s1 << nn;
            else cout << s1 << s2 << nn;
        }
        else {
            if (n % 2 == 0) cout << s2 << s1 << nn;
            else cout << s2 << nn;
        }
    }
    return 0;
}