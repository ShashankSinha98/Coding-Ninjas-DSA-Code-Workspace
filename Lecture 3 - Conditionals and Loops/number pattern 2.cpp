#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row=1;
    while(row<=n) {
        int spaceLim=n-row;
        int k=1;
        while(k<=spaceLim) {
            cout<<" ";
            k+=1;
        }

        k=row;
        int col=1;
        while(col<=row) {
            cout<<k;
            k+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    
}