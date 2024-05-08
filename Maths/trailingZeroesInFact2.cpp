#include <iostream>
using namespace std;

// method 2

int main(){
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    int res = 0;

    for(int i = 5; i <= n; i = i * 5){
res = res + n/i;
    }

   cout << "No of trailing zeroes are : " << res << endl;

}