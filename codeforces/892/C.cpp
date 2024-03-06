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

const int maxn = 2e4;
const u32 MOD = 1000000007;
int a[maxn]{};
int b[maxn]{};

// int obtun(int i, int j) {
//     int aux = __gcd(i, j), ans = 1;
//     while (aux != 1) {
//         i /= aux;
//         j /= aux;
//         aux = __gcd(i,j);
//         ans++;
//     }
//     return ans;
// }

int main(){ 
    fast_io;
    int n, unos = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) unos++;
    }
    int mcd = a[0];
    for (int i = 1; i < n; i++ ){
        mcd = __gcd(a[i], mcd);
    }
    if(mcd != 1) {cout << "-1\n"; return 0;}

    if (n == 1 and a[0] == 1) {cout << "0\n"; return 0;}
    
    int aux, distmin = 2e4;
    bool ff = false;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            // distmin = min(distmin, obtun(a[i], a[j]));
            aux = __gcd(a[i], a[j]);
            if (aux == 1) {
                distmin = min(distmin, j - i);
                ff = true;
            }
        }
    }
    if (!ff) {
        cout << n + 1 - unos << "\n"; 
    }
    else {
        (distmin == 2e4) ? cout << "-1\n" : cout << n + distmin - 1 -unos<< "\n";
    }
    return 0;
}
