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
// set <int> s;
// map <int, int> m;

int main(){ 
    fast_io;
    int n;
    cin >> n;
    vi v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n <= 2){
        cout << -1 << "\n";
        return 0;
    }

    swap(v[0], v[1]);
    if (!(v[0] <= v[1] and v[1] <= v[2]) and !(v[0] >= v[1] and v[1] >= v[2])){
        cout << 1 << " " << 2 << "\n";
        return 0;
    }
    swap(v[0], v[1]);
    for (int i = 1; i < n-2; i++) {
        swap(v[i], v[i+1]);
        if (!(v[i] <= v[i+1] and v[i+1] <= v[i+2]) and !(v[i] >= v[i+1] and v[i+1] >= v[i+2])){
            cout << i+1 << " " << i+2 << "\n";
            return 0;
        }
        if (!(v[i-1] <= v[i] and v[i] <= v[i+1]) and !(v[i-1] >= v[i] and v[i] >= v[i+1])){
            cout << i+1 << " " << i+2 << "\n";
            return 0;
        }
        swap(v[i], v[i+1]);
    }
    swap(v[n-2], v[n-1]);
    if (!(v[n-3] <= v[n-2] and v[n-2] <= v[n-1]) and !(v[n-3] >= v[n-2] and v[n-2] >= v[n-1])){
        cout << n-1 << " " << n << "\n";
        return 0;
    }
    swap(v[n-2], v[n-1]);
    
    swap(v[0], v[1]);   
    if (!(v[0] <= v[1] and v[1] <= v[2]) and !(v[0] >= v[1] and v[1] >= v[2])){
        cout << 1 << " " << 2 << "\n";
        return 0;
    }
    for (int i = 1; i < n-2; i++) {
        swap(v[i], v[i+1]);
        if (!(v[i] <= v[i+1] and v[i+1] <= v[i+2]) and !(v[i] >= v[i+1] and v[i+1] >= v[i+2])){
            cout << i+1 << " " << i+2 << "\n";
            return 0;
        }
        if (!(v[i-1] <= v[i] and v[i] <= v[i+1]) and !(v[i-1] >= v[i] and v[i] >= v[i+1])){
            cout << i+1 << " " << i+2 << "\n";
            return 0;
        }
    }
    swap(v[n-2], v[n-1]);
    if (!(v[n-3] <= v[n-2] and v[n-2] <= v[n-1]) and !(v[n-3] >= v[n-2] and v[n-2] >= v[n-1])){
        cout << n-1 << " " << n << "\n";
        return 0;
    }
    
    cout << -1 << "\n";


    

    return 0;
}
