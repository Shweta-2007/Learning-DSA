
// col:   1 2 3
// row 1: A 
// row 2: B C
// row 3: C D E
// row 4: D E F G


#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    
    while(row <= n){
        int col = 1;
        while(col <= row){
            char ch = 'A' + row + col - 2;
cout << ch;


col ++;
        }
        cout << endl;
        
        row ++;
    }
    
}