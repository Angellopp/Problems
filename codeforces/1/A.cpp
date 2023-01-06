#include <iostream>

using namespace std;

int main() {
    long long m,n,a; cin>>m>>n>>a;
    long long t1 = (m%a==0) ? (m/a) : (m/a+1);
    long long t2=(n%a==0) ? (n/a) : (n/a+1);
    cout<<t1*t2;
}