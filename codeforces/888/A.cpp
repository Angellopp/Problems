#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, rpta = 0; cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n - 1; i++){
        if((a[i] < a[i - 1] and a[i] < a[i + 1]) or (a[i] > a[i - 1] and a[i] > a[i + 1]))
            rpta++;
    }
    cout << rpta;
}