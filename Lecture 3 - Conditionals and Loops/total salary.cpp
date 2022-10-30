#include<iostream>
using namespace std;

int main() {

    int basicSalary;
    char grade;

    cin>>basicSalary>>grade;

    float hra = 0.2*basicSalary;
    float da = 0.5*basicSalary;
    float pf = 0.11*basicSalary;

    int allow=0;
    if(grade=='A') {
        allow=1700;
    } else if(grade=='B') {
        allow=1500;
    } else {
        allow=1300;
    }

    float totalSalaryFloat = basicSalary+hra+da+allow-pf;
    int totalSalaryInt = totalSalaryFloat;
    
    if(totalSalaryFloat-totalSalaryInt>=0.5) {
        totalSalaryInt+=1;
    }
    cout<<totalSalaryInt;
    
}