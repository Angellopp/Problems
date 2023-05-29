#include <bits/stdc++.h>
typedef long long ll; 
using namespace std;
int N = 2e5;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt; cin >> tt;
    int n, tmp, lst, rpta;
	bool flg = false;
	while(tt--) {
		cin >> n >> lst;
		flg = false;
		for(int i = 2; i <= n; ++i) {
			cin >> tmp;
			if(abs(tmp - lst) >= 2) {
				rpta = i;
				flg = true;
			}
			lst = tmp;
		}
		if(flg) cout << "YES\n" << rpta - 1 << " " << rpta << "\n";
		else cout << "NO\n";
	}
    
}