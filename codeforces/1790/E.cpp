#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt,x; cin>>tt;
    while(tt--){
        cin>>x;
        if(x&1){
            cout<<-1<<endl; continue;
        }
        int y=x>>1;
        if(y&x){
           cout<<-1<<endl;continue;
        }
        cout<<x+y<<" "<<y<<endl;
    }  
}