#include <iostream>
using namespace std;

// [8,5,0,10,0,20]
// [8,5,10,20,0,0]

void moveAllZeroesToEnd ( int arr[], int size){
    int nonZeroIndex = 0;
   for(int i = 0; i < size - 1; i++){
    if(arr[i] != 0){
        arr[nonZeroIndex] = arr[i];
        nonZeroIndex++;
    }
   }
   for( int i = nonZeroIndex; i < size; i++){
    arr[i] = 0;
   }
}

int main(){
 int size;
   cout << "Enter the size of your array ";
   cin >> size;

int arr[size];
   cout << "Enter " << size << " elements seperated by spaces ";
   for(int i = 0; i < size; i++){
    cin >> arr[i];
   }

  moveAllZeroesToEnd(arr, size);
  cout << "New array: ";
for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
  

}