#include <iostream>
using namespace std;

int main(){
    int *a,*b, *c, n ,i;

    cout << "Enter number of elements: ";
    cin >> n;

    a=(int*)malloc(n*sizeof (int));

    for (i=0;i<n;i=i+1){
        cout<<"Enter the value A:";
        cin>>*(a+i);

    }

    b=(int*)malloc(n*sizeof (int));

    for(i=0;i<n;i=i+1){
        cout<<"Enter the value B:";
        cin>>*(b+i);

    }

   c=(int*)malloc(n*sizeof (int ));
   cout<<"Value of c :\n";

   for(i=0;i<n;i=i+1){
    c[i]=a[i]+b[i];
    cout<<c[i]<<endl;
   }


}
