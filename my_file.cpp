#include<iostream>
using namespace std;
int main(){

int marks;
cout <<" Enter student's marks:" << endl;
cin >> marks;
if (marks >= 90) {
cout << "grade A" << endl;
}
else if (marks >= 80) {
cout << "grade B" <<endl;
}
else if (marks >= 70) {
cout << "grade C" <<endl;
}
return 0;
}
