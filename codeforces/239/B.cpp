#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.end()
#define pb push_back
#define pf push_front
#define PI acos(-1)
#define F first
#define S second

using u32 = uint32_t;
using u64 = uint64_t;
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<string> vs;
typedef priority_queue<int> pq_max;
typedef priority_queue<int, vi, greater<int>> pq_min;

const int maxn = 2e5;
const u32 MOD = 1000000007;

// vii p(100);


int main(){ 
    fast_io;
    int n, q;
    string s;
    cin >> n >> q;
    cin.ignore();
    cin >> s;
    int l, r;
    for (int i = 0; i < q; i++) {
        vi v(10);
        bool mov = false;
        cin >> l >> r;
        // cout << l << " " << r << endl;
        string ss = s.substr(l-1, r-l+1);
        // cout << ss << endl;
        int k = 0, sz = ss.size(), dir = 1;
        // cout << sz;
        //
        int aux = 0;
        while(0 <= k and k < sz) {
            if (isdigit(ss[k])) {
                int dig = ss[k] - '0';
                v[dig]++;

                if (dig != 0) {
                    ss[k] = (dig-1) + '0';
                    k += dir;
                }
                else {
                    ss.erase(k,1);
                    if(dir == -1) k+=dir;
                }
                mov = false;
                // cout << k << " " << sz << endl;
            }
            else {
                if (mov) {
                    ss.erase(k-dir,1);
                    if(dir == 1) k-=dir;
                    // else k+=dir;
                    (ss[k] == '>') ? dir = 1 : dir = -1;
                    k += dir;
                }
                else {
                    (ss[k] == '>') ? dir = 1 : dir = -1;
                    k += dir;
                }
                mov = true;
            }
            sz = ss.size();

            // cout << ss << endl;
            // for(int j = 0; j < 7; j++) {
            //     (j == k) ? cout << "." : cout << " ";
            // }cout << endl;
            // aux++;
        }
        // cout << ss << endl;
        for (int j : v) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
