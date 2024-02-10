#include <bits/stdc++.h>
#define fori for (int i = 0; i < n; i++)
#define imp(v) for (int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << "\n";
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
using namespace std;
int main() {
    fast_io
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector <int> v(n+1);
        vector <int> ind;
        fori cin >> v[i];
        v.push_back(0);
        ll aux = 0;
        for (int i = n; i > 1; i--) {
            aux += v[i];
            if (-v[i-1] <= aux) {
                ind.push_back(i-1);
            }
        }
        ind.push_back(0);

        // imp(ind);
        int j = ind.size() - 1;
        ll sum = 0, mul = 0;
        fori {
            if(i == ind[j]) {
                j--;
                mul ++;
            }
            sum += mul * v[i];	
        }
        cout << sum << "\n";

    }
}