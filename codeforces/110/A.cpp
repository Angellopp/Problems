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
string s;

int main(){ 
    fast_io;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == '4' or s[i] == '7') {
            ans++;
        }
    }
    string ss = to_string(ans);
    for (int i = 0; i < ss.size(); i++) {
        if(ss[i] != '4' and ss[i] != '7') {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
