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

// typedef long  ll;
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


int cal(int n) {
    int can = 0;
    while(n % 10 == 0)  {
        n /= 10;
        can++;
    }
    return can;
}
int cif(int n) {
    int can = 0;
    while(n)  {
        n /= 10;
        can++;
    }
    return can;
}
// #define int long long int
int main(){ 
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, aux;
        cin >> n >> m;
        // vector <int> v(n);
        vector <pair<int,int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> aux;
            v[i] = make_pair(cal(aux), cif(aux));
        }
        sort(all(v));
        int fac = 1;
        int ans = 0;
        for (int i = v.size()-1; i >= 0; i--) {
            if(fac == 1) {
                ans +=  v[i].S - v[i].F;
                fac = 0;
            }
            else {
                ans += v[i].S;
                fac = 1;
            }
        }
        if( ans > m) cout << "Sasha\n";
        else cout << "Anna\n";


        


        
    }
    return 0;
}
