#include <bits/stdc++.h>
#include <vector>
#define ll long long
#define endl "\n"
using namespace std;

ll t; 
int tam;

vector <ll> pref(2e5), suf(2e5);
vector <int> v;

ll ans (int l, int r) {
    int n = r - l;
    if (n == 0) {
        if (v[r] < t) return 1;
        return 0;
    }
    // cout << l << " " << r << " " << n/2 << endl; 
    // int k1 = n, k2 = n + 1;
    
    vector <ll> prefor (pref.begin() + (l + n/2 + 1), pref.begin() + r + 1);
    // cout << "prefor: ";
    // for (ll l : prefor) {
    //     cout << l << " ";
    // } cout << endl;
    
    vector <ll> sufor (suf.begin() + tam - l - n/2, suf.begin() + tam - l + 1);
    // cout << "suffor: ";
    // for (ll l : sufor) {
    //     cout << l << " ";
    // } cout << endl;
    
    sort(sufor.begin(), sufor.end());
    sort(prefor.begin(), prefor.end());
    
    vector<ll>::iterator num; 
    int i = 0;
    ll aux = 0;
    do {
        ll val = t - sufor[i] + suf[tam - l - n/2 - 1] + pref[l + n/2]; 
        // cout << "val = " << val << endl;
        num = lower_bound(prefor.begin(), prefor.end(), val);
        aux += (num - prefor.begin());
        // cout << "aux = " << aux << endl;
        i++;
    }
    while (num != prefor.begin() and i < sufor.size());
    // ll piv1 = 
    aux += (ans(l, l + n/2) + ans(l + n/2 + 1, r));
    
    
    
    // sufor[0] = suf[n/2-1];
    // prefor[];
    // for (int i = 1; i <= n/2; i++) {
    //     sufor[i] = sufor[i-1];
    // }
    return aux;
    
}

int main() {
    int n, aux; 
    cin >> n >> t;
    tam = n - 1;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        v.push_back(aux);
    }
    pref[0] = v[0];
    suf[0] = v[n-1];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + v[i];
        suf[i] = suf[i-1] + v[n-i-1];
    }
    cout << ans(0, tam) << endl;
}