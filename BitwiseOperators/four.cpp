
// FIBONACCI SERIES  => 0, 1, 1, 2, 3, 5,8,13, ...

#include <iostream>
using namespace std;

int main(){
    int n = 10;
     int a = 0;
     int b = 1;
     

for(int i = 1; i <= n; i++){
   
    int sum = a + b;
    
    a = b;
    b = sum;
     
     cout<<sum;
}



}