// 1
// 2 3
// 3 4 5
// 4 5 6 7

// re do this without using value

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1; // j 1 se start ho raha hai
        int value = i;
        while( j <= i){
           cout << value;
           value++;
           j++;
           
        }
        cout << endl;
        i ++;
    }
    
}