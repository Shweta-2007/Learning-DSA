// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

// j 1 se shuru ho ke 4 pe khtm ho raha hai, matlab j 1 se n tak chal raha hai

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j;
            j ++;
        }
        cout << endl;
        i ++;
    }
}