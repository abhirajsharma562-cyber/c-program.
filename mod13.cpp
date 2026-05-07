#include<iostream>
using namespace std;

int main(){
    float angle1,angle2,angle3;

    cout<<"Enter the first two angles:";
    cin>>angle1>>angle2;
    //formula :180-(a+b)
    angle3=180-(angle1+angle2);
    cout<<"The third angle is:"<<angle3<<endl;
}
