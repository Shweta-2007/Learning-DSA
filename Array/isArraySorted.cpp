#include <iostream>
using namespace std;

bool isArraySorted(int arr[], int size){
for(int i = 0; i < size - 1; i++){
    if(arr[i] > arr[i + 1]){
        return false;
    }
}
return true;
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

   if(isArraySorted(arr, size)){
    cout << "Array is sorted" << endl;
   } else{
    cout << "Array is not sorted" << endl;

   }
return 0;
}