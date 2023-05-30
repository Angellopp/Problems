#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    string s; cin >> s;
    ll n = s.size();
    if(n < 7) {cout << "no"; return 0;}
    int i = 0;
    for(i = 0; i < n; i++)
        if(s[i] == '1') break; 
    if(i == n) {cout << "no"; return 0;}
    int c=0;
    for(int j = i + 1; j < n; j++) 
        if(s[j] == '0') {c++;}
    if(c >= 6) {cout << "yes"; return 0;} 
    cout << "no"; return 0; 
}