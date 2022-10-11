#include<iostream>
using namespace std;
int main(){
    int a=500;
    cout<<a<<endl;
    int &b=a;
    cout<<"This is pointing value of b which is pointing towards x :"<<b;
    return 0;
}