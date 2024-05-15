#include <iostream>
using namespace std;

void reverseArray ( int arr[], int size){
   
for(int i = 0; i < size / 2; i++){
    int temp = arr[i];
    arr[i] = arr[size - i- 1];
    arr[size - i - 1] = temp;
   
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

  reverseArray(arr, size);
  cout << "Reversed array: " << endl;

  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }


}