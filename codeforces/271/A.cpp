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

bool v(int n) {
    string s = to_string(n);
    return s[0] != s[1] and s[1] != s[2] and s[2] != s[3] and s[3] != s[4] and s[0] != s[2] and s[1] != s[3] and s[0] != s[3];
}
int main(){ 
    fast_io;
    int n;
    cin >> n;
    while(!v(++n)) {}
    cout << n << "\n";
    return 0;
}
