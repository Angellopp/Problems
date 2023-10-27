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

const int maxn = 2e8;
const u32 MOD = 1000000007;

// int sq[maxn]{};

int main(){ 
    fast_io;
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            int k = i*i + j*j;
            int sq = sqrt(k);
            if (sq*sq != k) continue;
            else if(1 <= sq and sq <= n) ans++;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
