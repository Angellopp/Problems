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

int sig(int n) {
    if (n > 0) return 1;
    if (n < 0) return -1;
    return 0;
}

int main(){ 
    fast_io;
    int a[3][3]{};
    int n, x, y, i, j;
    cin >> n >> x >> y;
    while (n--){
        cin >> i >> j;
        a[1 + sig(x - i)][1]++;
        a[1][1 + sig(y - j)]++;
    }

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int b[4]{}, max = 0, i_max = 0;
    b[0] = a[0][1]; b[1] = a[1][2]; b[2] = a[2][1]; b[3] = a[1][0];
    for(int i = 0; i< 4; i++) {
        if (b[i] > max) {
            max = b[i];
            i_max = i;
        }
    }
    (i_max % 2) ? y += sig(i_max - 2) : x += sig(1 -i_max);
    cout << max << "\n" << x << " " << y << endl;
    // 0 -> x+1 << y  << endl;
    // 1 -> x << y - 1 << endl;
    // 2 -> x-1 << y << endl;
    // 3 -> x << y + 1 << endl;
    return 0;
}
