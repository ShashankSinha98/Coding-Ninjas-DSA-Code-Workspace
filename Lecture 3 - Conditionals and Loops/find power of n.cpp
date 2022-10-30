#include<iostream>
using namespace std;

int main() {

    int x,n;
    cin>>x>>n;

    int prod=1;
    while(n!=0) {
        prod*=x;
        n--;
    }

    cout<<prod;
    
}