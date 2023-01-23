#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
    int T; cin>>T;
    ll n,s,t;
    while(T--){
        cin>>n>>s>>t;
        cout<<max(n-s,n-t)+1<<endl;
    }
    
}
  	