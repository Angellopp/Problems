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
    int tt, aux;
    cin >> tt;
    while (tt--) {
        int a, b, k;
        cin >> a >> b >> k;
        // int exa = 1;
        // while (k % a == 0) {
        //     k /= a;
        //     exa++;
        // }
        // // cout << exa << "\n";
        // int exb = 1;
        // while (k % b == 0) {
        //     k /= b;
        //     exb++;
        // }
        // cout << exa* exb << "\n";
        int expa = 1;
        int ans = 0;
        set <int> mp;
        while (k % a == 0) {
            int aux = k;
            ans ++;
            mp.insert(aux);
            while (aux%b== 0) {
                aux /= b;
                mp.insert(aux);
            }
            k /= a;
            // cout << ans << "\n";
        }
        int aux = k;
        ans ++;
        mp.insert(aux);
        while (aux%b== 0) {
            aux /= b;
            mp.insert(aux);
            // ans ++;
        }
        k /= a;
            // cout << ans << "\n";
        cout << mp.size() << "\n";
    }
    return 0;
}
