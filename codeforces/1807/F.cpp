#include <bits/stdc++.h>
#define ll long long
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
            // cout << cur.first << " " << cur.second << " " << dir ;
            int dx, dy;
            if (dir[0] == 'D') dx = n - cur.first;
            if (dir[0] == 'U') dx = cur.first - 1;
            if (dir[1] == 'R') dy = m - cur.second;
            if (dir[1] == 'L') dy = cur.second - 1;

            // if curr + a*mp[s] == fin {con = 1}



            pair<int, int> dist = {fin.first - cur.first, fin.second - cur.second};
            can = ((dist.first == 0 and dist.second == 0) or abs(dist.first) == abs(dist.second) and dist.first/abs(dist.first) == mp[dir].first and dist.second/abs(dist.second) == mp[dir].second);
            // if(dist.first/mp[dir].first == dist.second/mp[dir].second) break;

            if (dx <= dy) {
                cur = {(dir[0] == 'D') ? n : 1, cur.second + dx * mp[dir].second};
                (dir[0] == 'D') ? dir[0] = 'U' : dir[0] = 'D';
            }
            if (dy <= dx) {
                if (dy < dx) cur = {cur.first + dy * mp[dir].first, (dir[1] == 'L') ? 1 : m};
                (dir[1] == 'L') ? dir[1] = 'R' : dir[1] = 'L';
            }
            if(ans == 0) {primer = cur; dir_primer = dir;}
            ans++;
            // cout << " -> " << cur.first << " " << cur.second << " " << dir << nn;

        }
        while ((cur != primer or dir != dir_primer or ans == 1) and !can);
        if(!can) ans = 0;
        cout << ans - 1<< nn;
    }
    return 0;
}