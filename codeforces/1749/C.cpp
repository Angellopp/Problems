#include <bits/stdc++.h>
#define ll long long
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
using namespace std;

int tt, n;
vector<int> v(100);
int main() {
    cin >> tt;
    while (tt--) {
        cin >> n;
        readv(v, n);
        sort(v.begin(), v.begin()+n);
        if (v[0] != 1) {
            cout << 0 << nn;
            continue;
        }
        int k = 1;
        for (k; k <= n; k++) {
            int aux = k;
            int l = 0, r = n-1;
            while (true) {
                while (v[r] > aux) r--;
                if (l > r--) break;
                l++;
                aux--;
            }
            if(aux) break; 
        }
        cout << k - 1 << nn;

    }
    return 0;
}