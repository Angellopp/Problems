#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;cin>>t;
    while(t--){
        string s,ss; cin>>s;
        ss=s; int n=s.size();
        if(s[0]=='?') ss[0]='0';
        if(s[n-1]=='?') ss[n-1]='1';
        for(int i=1;i<n-1;i++){
            if(s[i]=='?'){
                ss[i]=ss[i-1];
            }
        }
        cout<<ss<<"\n";
    }
}