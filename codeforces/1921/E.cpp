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


int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        ll h, w,xa, ya, xb, yb;
        cin >> h >> w >> xa >> ya >> xb >> yb;
        if (abs(xa - xb) % 2 == 1) {
            while ((xa != h and xb != 1)) {
                xa++;
                if (ya < w and ya < yb) {
                    ya++;
                }
                else if (ya > 1 and ya > yb) {
                    ya--;
                }
                if (xa == xb and ya == yb) {
                    cout << "Alice\n";
                    break;
                }
                xb--;
                if (yb < w and ya <= yb) {
                    yb++;
                }
                else if (yb > 1 and ya >= yb) {
                    yb--;
                }
                
                // cout << xa << " " << ya << " " << xb << " " << yb << "\n";
            }
            if (!(xa == xb and ya == yb)) cout << "Draw\n";
            
        }
        //Gana bob
        else {
            while ((xa != h and xb != 1)) {
                xa++;
                if (ya < w and yb <= ya) {
                    ya++;
                }
                else if (ya > 1 and yb >= ya) {
                    ya--;
                }
                xb--;
                if (yb < w and yb < ya) {
                    yb++;
                }
                else if (yb > 1 and yb > ya) {
                    yb--;
                }
                // cout << xa << " " << ya << " " << xb << " " << yb << "\n";
                if (xa == xb and ya == yb) {
                    cout << "Bob\n";
                    break;
                }
                
            }
            if (!(xa == xb and ya == yb)) cout << "Draw\n";
        }


    }
    return 0;
}
