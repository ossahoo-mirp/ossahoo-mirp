#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a, b, c, d;
cout<< "enter value a:"<<endl;
cin>>a;
cout<< "enter value b:"<<endl;
cin>>b;
cout<< "enter value c:"<<endl;
cin>>c;
d = sqrt((b*b)-(4*a*c));
if (d>=0){
cout<<"roots are real"<<endl;
}
else if (d <0){
cout<< "roots are imaginary"<<endl;
}
return 0;
}
