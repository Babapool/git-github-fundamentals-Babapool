#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout<<"\n Enter number of rows:";
    cin>>n;
    cout<<endl<<endl;

    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i;j++)
            cout<<" ";
       for(j=0;j<n;j++)
            cout<<"*";

       cout<<"\n";
    }

    return 0;
}

/*
OUTPUT:


 Enter number of rows:5


     *****
    *****
   *****
  *****
 *****

Process returned 0 (0x0)   execution time : 2.631 s
Press any key to continue.
*/
