#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;cin>>t;
    while(t--){
        int x,k;cin>>x>>k;
        if(!(x%k)) cout<<"2\n"<<1<<" "<<x-1<<"\n";
        else cout<<"1\n"<<x<<"\n";
    }
}