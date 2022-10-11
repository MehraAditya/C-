#include<iostream>
using namespace std;

int global=7;
void sum(){
    int a=9;
    cout<<global;
    }
int main(){
   /* int a = 8;
    int b = 6;*/
    int global=85;
    global=86;
    /*cout<<"the value of a is "<<a<<"\n the value of b is "<<b;*/
    sum();

    cout<<global;
   // cout<<"the value of global is "<<global;
    return 0;

}