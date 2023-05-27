// //6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;

void swap(int &p,int &q){
  int temp=p;
  p=q;
  q=temp;
}

int main(){
  int x,y;
  cout<<"enter the value of x and y";
  cin>>x>>y;
  swap(x,y);
  cout<<"after swaping x="<<x<<" and y="<<y<<endl;
}
