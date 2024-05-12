#include <iostream>
using namespace std;

int sum(int n){
    if(n < 0) return 0;
int value = 0;
value += n;
return value + sum(n - 1);
}

int main(){
int n;
cout << "Enter the value of n " << endl;
cin >> n;
int result = sum(n);
cout << "sum of first " << n <<  " natural no is " << result << endl; 
}