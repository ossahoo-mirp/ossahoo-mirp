#include<iostream>
using namespace std;
int main()
{
              int n, i ;
              float av,sum;            
              cout<<"Enter the Value of N:";
              cin>>n;
              sum=0;
              i =1;
         while(i<=n)
            {

                 sum= sum + i ;      
                 i = i + 1;
            }
                cout<<" Sum is: "<<sum;
                av=(float) sum/n;
                cout<<" Average is :"<<av;
                
return 0;
}

