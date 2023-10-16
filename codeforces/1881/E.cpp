#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)
#define ll long long
 
using namespace std;
const int N = 2*1e5 + 2;
int a[N], dp[N], n;

int main() {
    fast_io;
    int tt;
    cin >> tt;
    while (tt--) {
        cin >> n;
		dp[n] = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = n-1; i >= 0; i--){
			dp[i] = dp[i+1] + 1;
			if (i + a[i] <= n-1) dp[i] = min(dp[i], dp[i+a[i]+1]);
		}
		cout<<dp[0]<<endl;
    }
}