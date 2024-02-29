#include <bits/stdc++.h>
#define ll long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie (NULL)

using namespace std;
int tt, n;
char grid[2][200000]{};

int main() {
    fast_io;
    cin >> tt;
    while (tt--) {
        cin >> n;
        for (int i = 0; i < 2; i++) 
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];
        int i = 1;
        for (i; i < n; i++) {
            if(grid[0][i] > grid[1][i-1]) break;
        }
        int j = --i;
        for (j; j > 0; j--) {
            if(grid[0][j] < grid[1][j-1]) break;
        }
        for (int h = 0; h <= i; h++) cout << grid[0][h];
        for (int h = i; h < n; h++)  cout << grid[1][h];
        cout << "\n" << i - j + 1 << " \n";
    }
    return 0;
}