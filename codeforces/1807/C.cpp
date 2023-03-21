#include <bits/stdc++.h>
using namespace std;

bool f(string n){
    int s=n.size();
    for(int i=0;i<s-1;i++)    
        for(int j=i+1;j<s;j+=2)
            if(n[i]==n[j])
                return false;
    return true;
}

int main(){
    int tt,aux; cin>>tt;
        string n;
    while(tt--){
        cin>>aux>>n;
        (f(n))?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}