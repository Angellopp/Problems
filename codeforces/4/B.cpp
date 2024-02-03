#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int d, sum;
    cin >> d >> sum;
    vector <int> mi(d), ma(d);
    for (int i = 0; i < d; i++) {cin >> mi[i] >> ma[i];}
    int su = 0, sa = 0;
    for (int i = 0; i < d; i++) {
        su += ma[i];
        sa += mi[i];
    }
    if(su < sum or sa > sum) {
        cout << "NO\n";
    }
    else {
        sum -= sa;
        cout << "YES\n";
        for (int i = 0; i < d; i++) {
            if (mi[i] + sum > ma[i]) {
                sum -= (ma[i] - mi[i]);
                mi[i] = ma[i];
            }
            else {
                mi[i] += sum;
                break;
            }
        }
        for (int i = 0; i < d; i++) {
            cout << mi[i] << " ";
        } 
    }

}