#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    char p;
    for(int i=1;i<=n;i++){
        if(i%2){
            for(int j=1;j<=m;j++){
                cout<<"#";
            }cout<<"\n";
        }
        else if(i%4==2){
            for(int j=1;j<=m-1;j++){
                cout<<".";
            }cout<<"#\n";
        }
        else{
            cout<<"#";
            for(int j=2;j<=m;j++){
                cout<<".";
            }cout<<"\n";
            
        }
    }
}