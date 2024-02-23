#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define rep(ini, n) for (int i = ini; i < n; i++)
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

vector <int> prim;
int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    vector <int> v(2000);
    while (tt--) {
        int n;
        cin >> n;
        int xd1 = 0, xd2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == n) xd1 = i;
            if (v[i] == n-1) xd2 = i;
        }
        if (xd1 == 0) xd1 = xd2;
        for (int i = xd1; i < n; i++) {
            cout << v[i] << " ";
        }
        if (xd1 != n-1) {
            cout << v[--xd1] << " ";
            xd1--;
            for (xd1; xd1 >= 0; xd1--) {
                if (v[xd1] > v[0]) cout << v[xd1] << " ";
                else break;
            }
            for (int i = 0; i <= xd1; i++) {
                cout << v[i] << " ";
            }
        }
        else {
            xd1--;
            if (v[0] > v[xd1]) {
                for (int i = 0; i <= xd1; i++) {
                    cout << v[i] << " ";
                }
            }
            else {
                for (xd1; xd1 >= 0; xd1--) {
                    if (v[xd1] > v[0]) cout << v[xd1] << " ";
                    else break;
                }
                for (int i = 0; i <= xd1; i++) {
                    cout << v[i] << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
