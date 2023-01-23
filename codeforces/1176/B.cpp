#include <iostream>
#define ll long long
using namespace std;

int main() {
    int t; cin>>t;
    int n, c;
    ll aux;
    while(t--){
        int A[3]={};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>aux; A[aux%3]++;
        }
    c=min(A[1],A[2]);
    A[1]-=c; A[2]-=c;
    c=c+A[0]+A[1]/3+A[2]/3;
    
    cout<<c<<endl;
    }
    
    
}