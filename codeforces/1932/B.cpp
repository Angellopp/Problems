#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, aux, curr;
        cin >> n;
        set <int> s;
        cin >> aux;
        for (int i = 1; i < n; i++) {
            cin >> curr;
            aux = (aux+curr)/curr*curr;
        }
        cout << aux << "\n"; 

        // for (int i = 0; i < n; i++) {
        //     cout << v[i] << " ";
        // }
        // cout << "\n";
        // for (int )

    }   
}