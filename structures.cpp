#include<iostream>
using namespace std;

struct Employee
{
    /* data */
    int EID;
    char Section;
    float Salary;

};
int main(){

    struct Employee Aditya;
    
    Aditya.EID=12101319;
    Aditya.Section='A';
    Aditya.Salary=100000;

    cout<<Aditya.EID<<endl;
    cout<<Aditya.Section<<endl;
    cout<<Aditya.Salary<<endl;
    
    
    return 0;
}
