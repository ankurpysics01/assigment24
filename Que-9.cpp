//9. Write functions using function overloading to find a maximum of two numbers and both
//the numbers can be integer or real.
#include<iostream>
using namespace std;

void maxnumber(int num1,int num2){
    if(num1>num2){
        cout<<"the number num1 ="<<num1<<"is max(integer)"<<endl;
    }
    else{
        cout<<"the number num2 = "<<num2<<"is max(integer)"<<endl;
    }
}
void maxnumber(float num1,float num2){
    if(num1>num2){
        cout<<"the number num1 ="<<num1<<"is max(real)"<<endl;
    }
    else{
        cout<<"the number num2 ="<<num2<<"is max(real)"<<endl;
    }
}


int main(){
    int num1,num2;
    float n1,n2;
    cout<<"enter num1  ";
    cin>>num1;
    cout<<"enter num2  ";
    cin>>num2;
    cout<<"enter the n1 and n2 ="<<endl;
    cin>>n1>>n2;
    maxnumber(num1,num2);
    maxnumber(n1,n2);
    return 0;


}