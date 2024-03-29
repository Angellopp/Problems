#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int tt;
    cin >> tt;
    vector <ll> v(200005);
    while (tt--) {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < n; i++) cin >> v[i];
        string s;
        cin >> s;
        int l = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') l++;
        }
        if (s[n-1] == 'R') l++;
        l--;
        vector <ll> ans;
        ans.emplace_back(v[l]%k);
        int xdl = l, xdr = l;

        for (int i = n-2; i >= 0; i--) {
            if (s[i] == 'R') {
                ans.emplace_back((ans.back()*v[++xdr])%k);
            }
            else {
                ans.emplace_back((ans.back()*v[--xdl])%k);
            }
        }
        for (int i = ans.size()-1; i >= 0; i--) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}