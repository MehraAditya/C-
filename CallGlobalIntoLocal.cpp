#include<iostream>
using namespace std;
int c=45;
int main(){
    int a=6,b=10,c=980;
    cout<<"the product of a and b is : "<<a*b;
   c=a+b;
   cout<<"the value of local c is : "<<c;
   cout<<"the value of global c is (by calling using scope resolution oprtr ::)"<<::c;

    return 0;
}