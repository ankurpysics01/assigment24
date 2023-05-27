//1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;


class primnumber{

    public:
        int n;
    
    void checkprimenumber(){
        int flag=0;
        for(int i=2;i<=n/2;i++){

            if(n%i==0){
                flag=1;
            }
           
        }
        if(flag==0){
            cout<<" The number is Prime number "<<endl;
        }
        else{
            cout<<" the number is not prime number "<<endl;
        }
    }

};

int main(){
    primnumber a;
    cout<<"enter the number :-"<<endl;
    cin>>a.n;

    a.checkprimenumber();
    return 0;

}