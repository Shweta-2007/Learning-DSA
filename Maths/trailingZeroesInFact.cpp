#include <iostream>
using namespace std;

// method 1

int main(){
    int n;
    cout << "Enter your number" << endl;
    cin >> n;

    int fact = 1;
    for(int i = 2; i <= n; i++){
        fact*= i;
    }

    int res = 0;
    while(fact % 10 == 0){
        res++;
        fact = fact / 10;
    }

    cout << "No of trailing zeroes are : " << res << endl;

}