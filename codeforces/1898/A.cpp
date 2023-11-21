#include <iostream>
using namespace std;

int main() {
    int tt, n, k, dpb[102]{}, dpa[102]{};
    string s;
    cin >> tt;
    while (tt--) {
        cin >> n >> k;
        cin >> s;
        cin.ignore();
        // cout << s << "\n";
        int cb = 0;
        for (int i = 1; i <= n; i++) {
            dpa[i] = dpa[i-1] + (s[i-1] == 'A'); 
            dpb[i] = dpb[i-1] + (s[i-1] == 'B');
            if (s[i-1] == 'B') cb++;
        }
        // cout << "cb =" <<  cb << " k = " << k << "\n";
        if (k == cb) {
            cout << "0\n";
            continue;
        }
        // cout << "1\n";
        if (k > cb) {
            for(int i = 0; i <= n; i++) {
                if(dpa[i] == k-cb){
                    cout << "1\n" << i << " B\n"; 
                    break;
                }
            }
        }
        else {
            for(int i = 0; i <= n; i++) {
                if(dpb[i] == cb-k){
                    cout << "1\n" << i << " A\n"; 
                    break;
                }
            }
        }

    }
}