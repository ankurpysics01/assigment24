// 10. Write functions using function overloading to add two numbers having different data
// types.
#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}
float add(float a,float b){
    return a+b;
}
int main(){
    int n1,n2;
    float num1,num2;
    cout<<"enter the n1 and n2 "<<endl;
    cin>>n1>>n2;
    cout<<"enter the num1 and num2 "<<endl;
    cin>>num1>>num2;
    int result=add(n1,n2);
    float presult=add(num1,num2);

    cout<<"the addition of the number ="<<result<<endl;
    cout<<"the addition of the number ="<<presult<<endl;

    return 0;
}