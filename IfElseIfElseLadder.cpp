//Casting vote in an election
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age to check the eligibility to cast vote : "<<endl;
    cin>>age;
    if((age>18)||(age==18)){
        cout<<"You are eligible"<<endl;
    
    }
    //else if(age==18){
    //  cout<<"You are eligible but do you have voter id card ?"<<endl;
    // }
    else if(age<=0)
    {
        cout<<"You are not born yet "<<endl;
    }
    else{
        cout<<"You are not eligible";
    }

    return 0;
}