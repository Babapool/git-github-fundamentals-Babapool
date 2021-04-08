#include <iostream>
using namespace std;

int main()
{
   int n;
   int sum=0;

   cout<<"Program to Display sum of N natural nos"<<endl;
   cout<<"\nEnter the number n:";
   cin>>n;

   for(int i=1;i<=n;i++)
   {
       sum=sum+i;
   }
   cout<<"\nSum of "<<n<<" Natural nos is :"<<sum;
    return 0;
}
/*
OUTPUT:
Program to Display sum of N natural nos

Enter the number n:10

Sum of 10 Natural nos is :55
Process returned 0 (0x0)   execution time : 2.881 s
Press any key to continue.

*/
