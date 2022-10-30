#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int row=1;
    while(row<=n) {
        int k=row, col=1;
        while(col<=row) {
            cout<<k;
            k+=1;
            col+=1;
        }
        cout<<endl;
        row+=1;
    }
    
}