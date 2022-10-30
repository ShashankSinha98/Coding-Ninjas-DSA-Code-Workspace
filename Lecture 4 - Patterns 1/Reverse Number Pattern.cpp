#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    int row=1;
    while(row<=N) {
        int col=row;
        while(col!=0) {
            cout<<col;
            col-=1;
        }
        cout<<endl;
        row+=1;        
    }
}