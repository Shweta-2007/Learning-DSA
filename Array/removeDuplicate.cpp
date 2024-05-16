#include <iostream>
using namespace std;

int removeDuplicateArray ( int arr[], int size){
    int res = 1;
  for(int i = 1; i < size; i++){
   if(arr[i] != arr[res - 1]){
    arr[res] = arr[i];
    res++;
   }
  } 
return res;
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

  int newSize = removeDuplicateArray(arr, size);
  cout << "New array of size " << newSize << endl;

  

}