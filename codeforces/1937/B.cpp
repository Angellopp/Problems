#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)

using namespace std;
int tt, n;
char grid[2][200000]{};

int main() {
    fast_io;
    cin >> tt;
    vector <vector <bool>> dp(2, vector <bool> (200000, 0));
    while (tt--) {
        cin >> n;
        for (int i = 0; i < 2; i++) 
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];
        dp[0][0] = 1; dp[1][n-1] = 1;
        
        for (int i = 1; i < n; i++) {
            if(grid[0][i] <= grid[1][i-1]) dp[0][i] = 1;
            if(grid[0][i] >= grid[1][i-1]) dp[1][i-1] = 1;
        }
        int i = 0;
        while(i < n and dp[0][i] == 1) i++; i--;
        int j = i;
        while(j >= 0 and dp[1][j] == 1) j--; j++;
        for (int ii = 0; ii <= i; ii++)
            cout << grid[0][ii];
        for (int jj = i; jj < n; jj++) 
            cout << grid[1][jj];
        cout << "\n" << i - j + 1 << " \n"; 
        for (int ii = 0; ii < 2; ii++) 
            for (int jj = 0; jj < n; jj++)
                dp[ii][jj] = 0;
    }
    return 0;
}