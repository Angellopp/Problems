#include <iostream>

using namespace std;

int main() {
    char pi[32];
    char p1[]= {"314159265358979323846264338327"};

    int t; cin>>t; cin.ignore();
    while(t--){
        cin.getline(pi, 50, '\n');
        int i=0, c=0;
        while(pi[i]==p1[i] && i<=29){
            c++;i++;
        }
        cout<<c<<endl;
    }
}