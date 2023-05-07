#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a[4];
        int n;cin>>n;
        for(int i=0;i<4;i++){
            int aux=n%10; a[i]=aux; n/=10;
        }
        sort(a,a+4);
        if(a[0]==a[3]){ cout<<-1<<"\n"; continue;}
        if(a[0]==a[2] || a[1]==a[3]){ cout<<6<<"\n"; continue;}
        cout<<"4\n";
    }
}