#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age ";
    cin>>age;
    if(age>=18){
        cout<<"You can join the party";
    }
    else
       cout<<"You are not eligible to attend party";
    return 0;

}