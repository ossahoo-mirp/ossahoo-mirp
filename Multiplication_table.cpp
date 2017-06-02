#include<iostream> 

using namespace std; 

int main() { 
int N;
    cout << "Enter a integer: ";
cin >> N;
for (int i=1; i<=N; i++){
for (int a=i; a<=N*i; a+=i){
cout << a; 
}
cout <<""<<endl;
}
return 0;
}
