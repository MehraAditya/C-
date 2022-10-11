#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
    private:int scores[5];
    public:int sum=0;
    public:
       void input()
        {
            for(int i=0;i<5;i++)
            {
                cin >> scores[i];
                sum+=scores[i];
            }
        }
        int calculateTotalScore(){
            return sum;
        }

};

int main() {
    int n; 
    cin >> n;
    Student *s = new Student[n]; 
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    
    int ram_score = s[0].calculateTotalScore();

    
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > ram_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    
    return 0;
}