#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"\n Enter number of rows:";
    cin>>n;

    int a=1;

    for(i=n;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=a;j++)
        {
            cout<<j<<" ";
        }

        cout<<"\n";
        a++;
    }
    return 0;
}

/*
OUTPUT:


 Enter number of rows:5
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5

Process returned 0 (0x0)   execution time : 2.577 s
Press any key to continue.
*/
