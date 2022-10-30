#include<iostream>
using namespace std;

int main() {

    int N;
    cin>>N;


    int row=1;
    char end = 'A'+N-1;
    while(row<=N) {
        char ch = end-row+1;
        int col=1;
        while(col<=row) {
            cout<<ch;
            ch+=1;
            col+=1;
        }

        cout<<endl;
        row+=1;
    }
    
}