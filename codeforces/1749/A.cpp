#include <iostream>
using namespace std;

int main() {
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n,m; cin>>n>>m;
        int x,y;
        for(int i=0;i<m;i++)
            cin>>x>>y;
        if((m-n)){
            cout<<"YES\n"; continue;
        }
        cout<<"NO\n";
        
    }
}