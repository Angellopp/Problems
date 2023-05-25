#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        char ini=s[0]; int mx=0,aux=1;
        for(int i=1;i<n;i++){
            if(s[i]==ini){
                aux++;
            }
            else{
                mx=max(aux,mx);
                aux=1;
                ini=s[i];
            }
        }
        mx=max(aux,mx);
        cout<<mx+1<<"\n";
    }
}