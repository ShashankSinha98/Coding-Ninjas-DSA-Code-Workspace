#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row=1;
    while(row<=n) {
        
        int col=1, spaceLim=n-row;
        while(col<=spaceLim) {
            cout<<" ";
            col+=1;
        }

        col=1;
        int starLim=2*row-1;
        while(col<=starLim) {
            cout<<"*";
            col+=1;
        }

        cout<<endl;
        row+=1;
    }
    
}