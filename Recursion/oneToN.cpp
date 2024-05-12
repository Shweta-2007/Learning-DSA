#include <iostream>
using namespace std;

// Non tail recursive

void print(int n){
    if( n == 0) return;
    print (n - 1);
    cout << n << " ";   
}

int main(){
int n;
cout << "Enter the value of n:" << endl;
cin >> n;
print(n);
}

// tail recursive => recursive call is the last statement that is executed by the function. (much optimsed)

// initially pass k = 1
void fun(int n, int k){
    if(n == 0) return;
    cout << k  << " ";
    fun(n - 1, k + 1);
}