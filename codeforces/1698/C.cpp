#include <bits/stdc++.h>
typedef long long ll; 
using namespace std;
int N = 2e5;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll a[N];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a + n);
        if (a[2] < 0 || a[n-3] > 0) {cout << "NO\n"; continue;}
        
        if (binary_search(a, a + n, 0)) {
            if (a[1] < 0 || a[n-2] > 0) {cout << "NO\n"; continue;}
            else if (a[0] == 0 or a[n-1] == 0 or a[0] + a[n-1] == 0){
                cout << "YES\n"; continue;
            }
            cout << "NO\n"; continue;
        }
        else {
            
            if (n == 3) {
                if (a[1] + a[2] == 0 or a[0] + a[1] == 0 or a[0] + a[2] == 0) {cout << "YES\n"; continue;}
                cout << "NO\n"; continue;
            }
            if ((a[0] + a[3] == 0 and a[1] + a[2] == 0) or (a[2] == a[3] and a[1] + a[2] == 0 and 3 * a[1] == a[0]) or (a[0] == a[1] and a[1] + a[2] == 0 and 3 * a[2] == a[3])){
                cout << "YES\n"; continue;
            }
            cout << "NO\n"; continue;
        }
    }
}