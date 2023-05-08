#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    if(n<26){ cout<< "NO"; return 0;}
    set<char> ss;
    for(int i=0;i<n;i++){
        s[i]=tolower(s[i]);
        ss.insert(s[i]);
    }
    if(ss.size()==26){
        cout<<"YES"; return 0;
    }
    cout<<"NO";
}