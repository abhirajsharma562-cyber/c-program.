#include<iostream>
using namespace std;

int main(){
    float m1,m2,m3;
    float percentage,total;

    cout<<"Enter the 1st sub marks=:"<<endl;
    cin>>m1;
    cout<<"Enter the 2nd sub marks=:"<<endl;
    cin>>m2;
    cout<<"Enter the 3rd sub marks=:"<<endl;
    cin>>m3;

    total=(m1+m2+m3);
    percentage= (total/300)*100;
    cout<<"Total percentage=:"<<percentage<<endl;


}
