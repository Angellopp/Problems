#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
using namespace std;

string s;
map<string, pair<int, int>> mp;

int main() {
    mp["DR"] = {1, 1};
    mp["DL"] = {1, -1};
    mp["UR"] = {-1, 1};
    mp["UL"] = {-1, -1};
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, i1, j1, i2, j2;
        cin >> n >> m >> i1 >> j1 >> i2 >> j2;
        cin >> s;
        pair<int, int> ini = {i1, j1}, fin = {i2, j2}, cur = ini, primer = ini;
        string dir = s, dir_primer = s;
        int ans = 0;
        bool can = 0;
        do {
            int dx, dy;
            dx = ((dir[0] == 'D') ? n - cur.F : cur.F - 1);
            dy = ((dir[1] == 'R') ? m - cur.S : cur.S - 1);
            pair<int, int> dist = {fin.F - cur.F, fin.S - cur.S};
            can = ((dist.F == 0 and dist.S == 0) or (abs(dist.F) == abs(dist.S) and dist.F * mp[dir].F > 0 and dist.S * mp[dir].S > 0));
            if (dx <= dy) {
                cur = {(dir[0] == 'D') ? n : 1, cur.S + dx * mp[dir].S};
                (dir[0] == 'D') ? dir[0] = 'U' : dir[0] = 'D';
            }
            if (dy <= dx) {
                if (dy < dx) cur = {cur.F + dy * mp[dir].F, (dir[1] == 'L') ? 1 : m};
                (dir[1] == 'L') ? dir[1] = 'R' : dir[1] = 'L';
            }
            if(ans == 0) {primer = cur; dir_primer = dir;}
            ans++;
        }
        while ((cur != primer or dir != dir_primer or ans == 1) and !can);
        if(!can) ans = 0;
        cout << ans - 1 << nn;
    }
    return 0;
}