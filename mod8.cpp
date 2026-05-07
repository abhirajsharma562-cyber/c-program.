#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character:";
    cin>>ch;

    int asciiValue = static_cast<int>(ch);
    cout<<"Character:"<<ch<<endl;
    cout<<"Corresponding ASCII Value:"<<asciiValue<<endl;
}
