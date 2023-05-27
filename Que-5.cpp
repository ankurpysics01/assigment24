// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
#include <math.h>
using namespace std;

int perfect(int n){
  int ans;
  ans=sqrt(n);
  if(ans*ans==n){
    return 1;
  }
  else{
    return 0;
  }
}
void fibonacci(int n){
    if(perfect((5*n*n)-4)||perfect((5*n*n)+4)){
        cout<<"Yes this in the fibonacci series "<<endl;
    }
    else{
        cout<<"No this is not the fibonacci series"<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}