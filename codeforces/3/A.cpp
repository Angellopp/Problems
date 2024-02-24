#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define rep(ini, n) for (int i = ini; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    string i, f;
    cin >> i >> f;
    int dif1 = f[0]-i[0], dif2 = f[1]-i[1];
    cout << max(abs(dif1), abs(dif2)) << "\n";
    while(dif1 != 0 or dif2 != 0){
        if (dif1 > 0) {cout << "R"; dif1--;}
        if (dif1 < 0) {cout << "L"; dif1++;}  
        if (dif2 > 0) {cout << "U"; dif2--;}
        if (dif2 < 0) {cout << "D"; dif2++;}  
        cout << "\n";
    }

    return 0;
}
