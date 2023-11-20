#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, a[200000];
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {cin >> a[i];}
        if(n == 1) {cout << a[0] << "\n"; continue;}
        int max_so_far = -1000, max_ending_here = 0, par = (a[0] % 2 + 2) % 2;
        for (int i = 0; i < n; i++) {
            // cout << "max_so_far: " << max_so_far << "\n";
            // cout << "max_ending_here: " << max_ending_here << "\n";
            // cout << "par: " << par << "\n";
            if (i != 0 and par == ((a[i] % 2 + 2) % 2)) {
                max_ending_here = a[i];
                max_so_far = max(max_ending_here, max_so_far);
                if (max_ending_here < 0)
                    max_ending_here = 0;
                continue;
            }
            par = (a[i] % 2 + 2) % 2;
            max_ending_here = max_ending_here + a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        cout << max_so_far << "\n";
    }
}