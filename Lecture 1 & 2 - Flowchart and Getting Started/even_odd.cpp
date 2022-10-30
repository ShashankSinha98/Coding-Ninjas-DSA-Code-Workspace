#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Input a no: ";
    cin>>n;

    if(n%2==0) {
        cout<<"No is Even"<<endl;
    } else {
        cout<<"No is Odd"<<endl;
    }

    return 0;
}