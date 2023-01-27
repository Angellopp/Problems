#include <iostream>

using namespace std;

int main() {
    int t; cin>>t;
    int n,r,s, dif;
    while(t--){
         cin>>n>>r>>s;
         dif=r-s;
         int a=s/(n-1);
         for(int i=0;i<n-1-(s-a*(n-1));i++){
             cout<<a<<" ";
         }
         for(int i=0;i<(s-a*(n-1));i++){
             cout<<a+1<<" ";
         }
         cout<<dif<<endl;
    }  
}