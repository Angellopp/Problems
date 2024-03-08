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
        vector <int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        int mex = n;
        for (int i = 0; i < n; i++) {
            if(mp[i] == 0) {
                mex = i;
                break;
            }
        }
        set<int> s;
        int i = 0;
        for (i; i < n; i++) {
            if (v[i] < mex) s.insert(v[i]);
            if (s.size() >= mex) break;
        }
        if(i == n) {
            cout << "-1" << nn;
            continue;
        }
        set<int> z;
        int j = i+1;
        for (j; j < n; j++) {
            if (v[j] < mex) z.insert(v[j]);
            if (z.size() >= mex) break;
        }
        if (j == n) cout << "-1" << nn;
        else cout << 2 << nn << 1 << " " << i+1 << nn << i+2 << " " << n << nn;
    }
    return 0;
}