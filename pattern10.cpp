// A A A
// B B B
// C C C


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char val = 'A' + row - 1;  // 'A' + 1 = B
            cout << val;
            col ++;
        }
        cout << endl;
        row ++;
    }
    
}