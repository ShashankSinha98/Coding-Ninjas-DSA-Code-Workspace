#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = 20;
    int c = a + b; // 4 byte
    cout<<"A + B = "<<c<<endl;

    char ch = 'a'; // 1 byte
    cout<<"ch: "<<ch<<endl;

    float pi = 3.14; // 4 byte
    cout<<"pi: "<<pi<<endl;

    bool ans = true; // 1 byte
    cout<<"Ans: "<<ans<<endl;

    int size = sizeof(ans);
    cout<<"Size of ans: "<<size<<endl;
}
