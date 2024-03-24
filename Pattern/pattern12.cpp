
// col:   1 2 3
// row 1: A B C
// row 2: D E F
// row 3: G H I


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    int count = 0;
   while(row <= n){
    int col = 1;
    while(col <= n){
        char val = 'A' + count;
        cout << val;
        count++;
        col ++;
    }
    cout << endl;
    row++;
   }
    
}