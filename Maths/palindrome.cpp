#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

int temp = n;
int reverse = 0;
    while(temp != 0){
       
       int lastDigit = temp % 10;      
        reverse = reverse * 10 + lastDigit;
        temp = temp / 10;
    }

  if (reverse == n) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    

    
    

}