//3. Define a function to calculate x raised to the power y.
#include<iostream>
#include<cmath>
using namespace std;

class claculatexpowy{
    public:
        int x,y;

    void xpowofy(){

        cout<<"the value of x to the power y is : "<<pow(x,y)<<endl;
    }

};
int main(){
    claculatexpowy a;
    cout<<"Enter the x and y : ";
    cin>>a.x;
    cin>>a.y;

    a.xpowofy();
    return 0;
}

