    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main(){
        // cin.tie(nullptr)->sync_with_stdio(false);
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int tt;
        cin >> tt;
        vector <int> v(200005);
        while (tt--) {
            int n, k, x;
            cin >> n >> k;
            for (int i = 0; i < n; i++) {
                cin >> x;
                v[i] = x%k;
            }
            string s;
            cin >> s;
            int l = -1;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'L') l++;
            }
            if (s[n-1] == 'R') l++;
            vector <int> ans;
            ans.emplace_back(v[l]%k);
            int xdl = l, xdr = l;
            for (int i = n-2; i >= 0; i--) {
                int ind = ((s[i] == 'R') ? ++xdr : --xdl);
                ans.emplace_back((ans.back()*v[ind])%k);
            }
            for (int i = n-1; i >= 0; i--)
                cout << ans[i] << " ";
            cout << "\n";
        }
    }