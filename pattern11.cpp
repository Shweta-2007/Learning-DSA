// A B C
// A B C
// A B C


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char val = 'A' + col - 1;
            cout << val;
            col ++;
        }
        cout << endl;
        row ++; 
    }
    
}