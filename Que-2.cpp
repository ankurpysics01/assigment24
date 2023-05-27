//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;

class higestvalu{

    public:
        int n;

    void findmaxnumber(){
        int max=-1;
        int rem=n%10;
        if(rem>max){
            max=rem;

            n=n/10;
        }
        
        cout<<"the maximum number is "<<max<<endl;

    }
};

int main(){
    higestvalu a;
    cout<<"enter the number :-"<<endl;

    cin>>a.n;
    a.findmaxnumber();
    return 0;
}