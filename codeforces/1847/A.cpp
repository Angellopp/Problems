#include <bits/stdc++.h>
#define long long ll;

using namespace std;

int main() {
    int tt; cin >> tt;
    int k, n;
    int a, aa;
    while (tt--) {
        cin >> n >> k;
        cin >> a;
        vector <int> v;
        for (int i = 1; i < n; i++) {
            cin >> aa;
            v.push_back(abs(aa-a));
            a = aa;
        }
        sort(v.begin(),v.end());
        int sum = 0;
        auto it = v.begin();
        for (int i = 0; i  < n - k; i++, it++) {
            sum += *it;
            
        }
        cout << sum << "\n"; 
    }
}