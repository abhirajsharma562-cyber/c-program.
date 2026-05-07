#include<iostream>
using namespace std;
int main(){
    float floatValue =9.75f;
    int intValue= static_cast<int>(floatValue);
    cout<<"original float value:"<<floatValue<<endl;
    cout<<"Explicit cast integer value;"<<intValue<<endl;
}
