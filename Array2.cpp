#include<iostream>
using namespace std;
int main(){
    int i=0;
    int arr[]={10,20,30,40,50,60};
    do{
        cout<<"The value of "<<i<<" is "<<arr[i]<<endl;
        i++;
    }
    while(i<6);
    return 0;
}