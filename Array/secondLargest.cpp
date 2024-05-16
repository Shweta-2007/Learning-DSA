#include <iostream>
using namespace std;

int secondLargest(int arr[], int size){
     int largest = arr[0];
    int secondLargest = -1;
  for(int i = 1; i < size; i++){
    if(arr[i] > largest){
        secondLargest = largest;
         largest = arr[i];
    } else if(arr[i] != largest && arr[i] > secondLargest){
    secondLargest = arr[i];
    }
  } 
  return secondLargest;
}

int main(){
int array[10];
int n;
cout << "enter number of elements in array" << endl;
cin >> n;
cout << "enter elements in array" << endl;
for(int i = 0; i < n; i++){
    cin >> array[i];
};

int result = secondLargest(array, n );
cout << " second largest number is " << result << endl;

}