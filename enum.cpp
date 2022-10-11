#include<iostream>
using namespace std;

enum Sub{dsa,networking,english,SE,dbms,python};
Sub s1=dsa;
Sub s2=networking;
Sub s3=english;
Sub s4=SE;
Sub s5=dbms;
Sub s6=python;

int main(){
    
    
    cout<<s1<<endl; //0
    cout<<s2<<endl; //1
    cout<<s3<<endl; //2
    cout<<s4<<endl; //3
    cout<<s5<<endl; //4
    cout<<s6<<endl<<endl<<endl; //5

    cout<<(s1==0)<<endl; //return 0 because s1 is at 1(true) index
    cout<<(s1==3)<<endl;  // return/ print 0(false ) as s1 is not at 3 index 
     
    
    return 0;
}