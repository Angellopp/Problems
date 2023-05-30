#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n; cin >> n;
    ll a[26]{};
    vector<pair<ll,ll>> v;
    ll zer[26]{};
    char ini = 'a';
    while(n--){
        string s; cin >> s;
        int nn = s.size();
        for (int i = nn - 1; i >= 0; i--){
            a[s[i] - ini] += pow(10, nn - i - 1);  
        }
        zer[s[0] - ini] = 1;
    }
    int m = -1, p;
    for(int i = 0; i <= 9; i++)
        if(zer[i] == 0 and a[i] > m) {
            m = a[i], p = i;}
	a[p] = 0;
	ll sum = 0;
	sort(a,a + 10);	p = 1;
	for(int i = 9; a[i] > 0 and i >= 0; i--, p++)
	    sum += p * a[i];
	cout << sum << endl;
	return 0; 
}