#include <iostream>
using namespace std;

int fact(int n){
if( n <= 1) return n;
return n * fact(n - 1);
}

int main(){
int result = fact(5);
cout << "Factorial is " << result << endl;
return 0;
}