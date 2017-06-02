#include<iostream>
using namespace std;

int main(){
  int num;
  bool prime = true;

  cout << "Please enter a positive integer" << endl;
  cin >> num;


    for(int n = 2; n <= num - 1; n++){
      if(num % n == 0){
        prime = false;
      }
    }
  
  if(prime != false){
    cout << num << " is  prime" << endl;
  }
  else
    cout << num << "is not prime" << endl;

 
  return 0;
}
