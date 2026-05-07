#include <iostream>
#include<cstdlib>
using namespace std;

int main(){
    int  *a,*b, *c, n,t,i ;

    cout << "Enter number of elements: ";
    cin >> n;

    a=(int*)realloc(n,sizeof (int));
    if(a==NULL);


        cout<<"Allocation for A:";
        cin>>*(a+i);

    }

    b=(int*)realloc(n,sizeof (int));
    if(b==NULL);
        cout<<"Allocaton B:";
        cin>>*(b+i);

    }

   c=(int*)realloc(n,sizeof (int ));
   cout<<"Value of c :\n";
    if(c==NULL);

    c[i]=a[i]+b[i];
    cout<<c[i]<<endl;
   }


