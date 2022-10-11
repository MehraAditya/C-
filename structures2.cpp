#include<iostream>
using namespace std;

typedef struct Employee
{
    /* data */
    int EID;
    char Section;
    float Salary;

}ep;
int main(){

    ep Aditya;
    
    Aditya.EID=12101319;
    Aditya.Section='A';
    Aditya.Salary=100000;

    cout<<Aditya.EID<<endl;
    cout<<Aditya.Section<<endl;
    cout<<Aditya.Salary<<endl;
    
    
    return 0;
}
