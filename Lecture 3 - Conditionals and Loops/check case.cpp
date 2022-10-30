#include<iostream>
using namespace std;

int main() {

    char c = '\0';
    cout<<"Input a character: ";
    cin>>c;

    if(c>='A' && c<='Z') {
        cout<<"1";
    } else  if(c>='a' && c<='z') {
        cout<<"0";
    } else {
        cout<<"-1";
    }


}