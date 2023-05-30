#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int* a = new int[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    string s; cin>>s;
    ll rpta = 0; int i, j = 0, m;
    for(i = 0; i < n; i = j){
        for(j = i; s[i] == s[j]; j++){}
        sort(a + i, a + j, greater<int>());
        for(m = i; m < i + k and m < j; m++)
            rpta += a[m];
    }
    cout << rpta<<endl;
}