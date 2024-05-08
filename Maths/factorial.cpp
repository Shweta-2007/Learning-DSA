#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    int prod = 1;

for(int i = 2; i <= n; i++){
prod = prod * i;
}
    
cout << "The factorial is " << prod << endl;
}

// Recursive implementation

int fact(int n){
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    int prod = 1;

for(int i = 2; i <= n; i++){
prod = prod * i;
}
    
cout << "The factorial is " << prod << endl;
}
