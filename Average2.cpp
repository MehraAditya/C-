#include<iostream>
using namespace std;
int main(){

    
    int k,n,m;
    int i=m;

    cout<<"Enter lower limit of the series"<<endl;
    cin>>m;
    cout<<"Enter the upper limit of series"<<endl;
    cin>>n;
    for(i=m;i<=n;i++){
        cout<<"The average of the consecutive no between the limit is : "<<k<<endl;
        k=((0+i++)/(n-m));

    }
    return 0;
}