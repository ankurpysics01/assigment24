// 4. Define a function to print Pascal Triangle up to N lines.

#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

void pascaltringle(int n){
    int i,j,space;
    for(i=0;i<n;i++){
        for(space=n-i;space>0;space--){
            cout<<" ";
        }
        for(j=0;j<=i;j++){
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the number of lines : "<<endl;
    cin>>n;
    cout<<"Show the pascal triangle "<<endl;
    pascaltringle(n);

    return 0;
}