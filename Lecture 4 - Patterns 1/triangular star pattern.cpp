#include<iostream>
using namespace std;

int main() {

    int N;
    cin>>N;

    int row=1;
    while(row<=N) {
        int col=1;
        while(col<=row) {
            cout<<"*";
            col+=1;
        }
        cout<<endl;
        row+=1;
    }

}