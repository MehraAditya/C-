#include<iostream>
using namespace std;

union Aditya{
    int NameID;
    char Section;
    float Salary;

};
int main(){
    
    union Aditya Details;
    Details.NameID=12101319;
    Details.Section='A';
    Details.Salary=1000;
    cout<<Details.NameID<<endl;
    cout<<Details.Section<<endl;
    cout<<Details.Salary<<endl;
    
    return 0;
}