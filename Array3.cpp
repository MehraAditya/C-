#include<iostream>
using namespace std;
int main(){
    int Mathsmarks[]={10,20,30,40,50,60};
    int*p=Mathsmarks;
    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}