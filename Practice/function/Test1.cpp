
#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
       {
           cout<<i<<"\t";
           if(j==i)
           {
               cout<<"\n";
           }
       }
    }
}
