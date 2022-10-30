#include <iostream>
using namespace std;

int main() {

    int a = 100;
    char c = a;

    cout << "c: "<<c<<endl;

    c = 'A';
    a = c;

    cout << "a: "<<a<<endl;

    return 0;
}
