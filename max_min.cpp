#include<iostream>
using namespace std;
int main () {
int n, number;
int max = -10000, min = 10001;
cout << "Enter number of inputs" <<endl;
cin >> n;
for (int i = 0; i <n; i++){
cout << "Enter next number" << endl;
cin >> number;
if (number > max) {
max = number;
}
if (number < min) {
min = number;
}
}
cout << "Max is: " <<max<<" and min is:" <<min<<endl;
return 0;
}
