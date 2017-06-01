#include<iostream>
using namespace std;
int main()
{
int n, number;
int max = -10000, smax = -10001;
cout << "Enter a number of inputs" <<endl;
cin >> n;
for (int i=0; i < n; i++) {
cout << "Enter a number" <<endl;
cin >> number;
if (number > max && number <=max){
smax = number;
}
else if (number > max) {
smax = max;
max = number;
}
}
cout << "Max is: " <<max<<" and second max is:" <<smax<<endl;
return 0;
}


