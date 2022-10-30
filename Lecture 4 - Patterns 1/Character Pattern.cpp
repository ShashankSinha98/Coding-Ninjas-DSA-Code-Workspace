#include<iostream>
using namespace std;

int main() {

    int N;
    cin>>N;

    int row=1;
    while(row<=N) {

        char start = 'A'+row-1;
        int col=1;
        while(col<=row) {
            cout<<start;
            start+=1;
            col+=1;
        }

        cout<<endl;
        row+=1;
    }
    
}