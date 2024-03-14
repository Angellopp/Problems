#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define nn '\n'
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define readv(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define printv(v, n) for (int i = 0; i < n; i++) cout << v[i] << " "; cout << nn
#define dbg(n) cout << "<[" << #n << "] = " << n << ">" << nn
using namespace std;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    vector <int> pos, neg, cer;
    while (tt--) {
        int n, aux;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> aux;
            if (aux >= 0) pos.emplace_back(aux);
            else neg.emplace_back(aux);
            // else cer.emplace_back(aux);
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());

        // printv(pos, pos.size());
        // printv(neg, neg.size());
        if (neg.size() == 0) {
            cout << "No" << nn;
            pos.clear();
            neg.clear();
            cer.clear();
            continue;
        }
        vector <int> ans;
        int cur = neg[0];
        ans.emplace_back(neg[0]);
        int ii = 0, jj = 1;
        bool can = 1;
        while (true) {
            if (cur < 0) {
                if(ii < pos.size()) {
                    ans.emplace_back(pos[ii]);
                    cur += pos[ii++];
                    
                }
                else {
                    // can = 0;
                    break;
                }
            }
            else {
                if(jj < neg.size()) {
                    ans.emplace_back(neg[jj]);
                    cur += neg[jj++];
                }
                else {
                    // can = 0;
                    break;
                }
            }
        }
        if (ans.size() == n) {cout << "Yes" << nn; printv(ans, ans.size());}
        else cout << "No" << nn;
        pos.clear();
        neg.clear();
        cer.clear();

    }
    return 0;
}