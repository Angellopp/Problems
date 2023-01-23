#include <iostream>
#include <set>
#define ll long long
using namespace std;

int main() {
    ll x,y; cin>>x>>y;
    ll A[5]={}, B[5]={};
    for(int i=0;i<5;i++)
        A[i]=x/5;
    for(int i=0;i<5;i++)
        B[i]=y/5;
    for(int i=1;i<=x%5;i++)
        A[i]++;
    for(int i=1;i<=y%5;i++)
        B[i]++;
    ll c=0; c=A[0]*B[0];
    for(int i=1;i<5;i++){
        c+=(A[i]*B[5-i]);
    }
    cout<<c;
    
}