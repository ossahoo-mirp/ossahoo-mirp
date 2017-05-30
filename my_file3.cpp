#include<iostream>
using namespace std;
int main(){ 
int a, b, c, d  max = -1000000;

cout << "enter 1st integer:" <<endl;
cin >> a;
cout << "enter 2nd integer:" <<endl;
cin >> b;
cout << "enter 3rd integer:" <<endl;
cin >> c;
cout << "enter 4th integer:" <<endl;
cin >> d;
if (max>a){
cout << "a is maximum" <<endl;
}
else if  (b>a){
cout << "b is maximum" <<endl;
}
else if (c>b){
cout << "c is maximum" <<endl;
}
else if (d>c){
cout << "c is maximum" <<endl;
}




