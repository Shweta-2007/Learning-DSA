#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;

    // int output = 0;

    // for(int i = 1; i <= n; i++){
    //     output += i;
    // }

    // cout << "The output is:" << output << endl;

    int count = 0;

    while(n > 0)
    {
n = n/10;
count++;
    }

    cout << "Number of digits is " << count << endl;
    

}