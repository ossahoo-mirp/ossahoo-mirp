
#include<iostream>
using namespace std;
int main(){

char name[50]="my name";
cout<<"enter name: ";
cin>>name;
for (int i=0; name[i]!='a'; i++)
cout<<name[i]<<" ";
return 0;
}
