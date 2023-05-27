//8. Define overloaded functions to calculate area of circle, area of rectangle and area of
//triangle
#include<iostream>
#include<cmath>
using namespace std;

void area(float radius){
    float areacirle=3.14*radius*radius;
    cout<<"the area of the circle is ="<<areacirle<<endl;
}
void area(int lenght,int wight){
    int areaoftheractangle=lenght*wight;
    cout<<"the area of the rectangle is ="<<areaoftheractangle<<endl;
}
float area(float base,float  height){
    return (0.5*base*height);
}
int main(){
    float radius;
    int length,wight;
    float k,l,a;
    cout<<"enter the radius "<<endl;
    cin>>radius;
    cout<<"enter the lenght and wight of the tringle ="<<endl;
    cin>>length>>wight;
    cout<<"enter the base ,and height ="<<endl;
    cin>>k>>l;
    area(radius);
    area(length,wight);
    cout<<"the area of the tringle is = "<<area(k,l)<<endl;
    return 0;

}