#include<iostream>
using namespace std;

int global=7;
void sum(){
    int a=9;
    cout<<global;
    }
int main(){
    int global=85;
    global=86;
    sum();
    cout<<global;
    return 0;
}