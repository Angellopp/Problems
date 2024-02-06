#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--){
        int n;
        cin >> n;
        vector <int> a(n+2);
        for (int i = 1; i <= n; i++) cin >> a[i];
        vector<pair<int , pair<int, int>>> p;
        // p.push_back(a[i], {1,1});
        int curr = a[1], ini = 1;
        for (int i = 2; i <= n; i++) {
            if(a[i] != curr) {
                p.push_back({curr, {ini, i-1}});
                curr = a[i];
                ini = i;
            }
        }
        p.push_back({curr, {ini, n}});
        vector <int> ind;
        for (int i = 0; i < p.size(); i++) {
            // cout << p[i].first << " " << p[i].second.first << " " << p[i].second.second << "\n";
            ind.push_back(p[i].second.first);
        }
        // cout << "indices\n";
        // for (int i = 0; i < p.size(); i++) {
        //     cout << ind[i] << " ";
        // }cout << endl;
        int q, l ,r;
        cin >> q;
        while (q--) {
            cin >> l >> r;
            auto indl = upper_bound(ind.begin(), ind.end(), l);
            auto indr = upper_bound(ind.begin(), ind.end(), r);
            if (indl != ind.begin()) --indl;
            if (indr != ind.begin()) --indr;
            int idl = indl - ind.begin();
            int idr = indr - ind.begin();
            // cout << "indl: " << indl - ind.begin() << ", indr: " << indr - ind.begin() << "\n";
            if(idl == idr) cout << "-1 -1\n";
            else {
                if(p[idl].first == p[idr].first) {
                    idr--;
                }
                    // cout << p[idl].second.first << " " << p[idr-1].second.second <<"\n";
                
                // else {
                    // cout << p[idr].second.second << " " << p[idr].second.first << "\n";
                // }
                cout << p[idl].second.second << " " << p[idr].second.first << "\n";
            }
        }
            cout << "\n";
    }
    return 0;
}