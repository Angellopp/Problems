#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)

using namespace std;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string copy = s;
        sort(copy.begin(), copy.end());
        vector<pair<char,int>> v;
        char may = 'a';
        for (int i = n-1; i >= 0; i--) {
            if (s[i] >= may) {
                v.emplace_back(s[i], i);
                may = s[i];
            }
        }
        for (int i = 0; i < v.size(); i++) {
            s[v[i].second] = v[v.size()-i-1].first;
        }

        int cont = -1;
        for (int i = 0 ; i < n; i++) {
            if (s[i] == v.back().first) cont++;
        }
        // cout << s << "\n";
        // cout << ((s == copy) ? v.size() - 1 : -1 ) << "\n";
        if (s == copy) {
                cout << v.size() - 1 - cont << "\n";
        } 
        else 
            cout << -1 << "\n";
    }
    return 0;
}