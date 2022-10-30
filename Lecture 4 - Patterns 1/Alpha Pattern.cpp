#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    int row=1;
    while(row<=N) {
        char ch = 'A'+row-1;
        int col=1;
        while(col<=row) {
            cout<<ch;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
}