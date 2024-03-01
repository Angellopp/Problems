#include <bits/stdc++.h>
#define ll long long
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
using namespace std;

int tt, n;
vector<int> v(100);

bool f(int k){
    int aux = k;
    int l = 0, r = n-1;
    while (true) {
        while (v[r] > aux) r--;
        if (l > r--) break;
        l++;
        aux--;
    }
    return !(aux);
}

int upper_bound(int i, int n){
    int lo = i;
    int hi = n;
    while(lo < hi){
        int mi = lo + (hi - lo + 1) / 2;
        if(f(mi)) lo = mi;
        else hi = mi-1;
    }
    return lo;
}

int main() {
    cin >> tt;
    while (tt--) {
        cin >> n;
        readv(v, n);
        sort(v.begin(), v.begin()+n);
        cout << upper_bound(0, n) << nn;

    }
    return 0;
}