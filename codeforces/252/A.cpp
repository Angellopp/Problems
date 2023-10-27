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

const int maxn = 100;
const u32 MOD = 1000000007;
int a[maxn]{};

int main(){ 
    fast_io;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // if (n == 1) {cout << a[0] << "\n"; return 0;}

    // int maximo_total = 0;
    // int maximo_actual = a[0];

    // for (int i = 1; i < n; i++) {
    //     maximo_actual = max(0, maximo_total ^ a[i]);
    //     if (maximo_actual > maximo_total) {
    //         maximo_total = maximo_actual;
    //     }
    //     // cout << a[i] << " :" << maximo_actual << " " << maximo_total << "\n";
    //     // maximo_total = max(maximo_total, )
    // }

    // cout << maximo_total << "\n";
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum = 0;
            for(int k = i; k <= j; k++) {
                sum = sum ^ a[k];
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << "\n";
    return 0;
}
