//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;


int add(int p,int q,int r=0){
    return p+q+r;
}

int main(){
    cout<<"Addition of 2 number is ="<<add(2,3)<<endl;
    cout<<"Addition of 3 number is ="<<add(1,4,6)<<endl;
    return 0;
}