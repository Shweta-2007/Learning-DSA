#include <iostream>
using namespace std;

int secondLargestElemIndex(int arr[], int size){
    if(size <= 0) return -1;
   int largest = 0;
   int secondLargest = -1;
for(int i = 1; i < size; i++){
if(arr[i] > arr[largest]){
    secondLargest = largest;
    largest = i;

}else if (arr[i] < arr[largest]) {
            if (secondLargest == -1 || arr[i] > arr[secondLargest]) {
                secondLargest = i;
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

int result = secondLargestElemIndex(array, n );
cout << "Index of second largest number is " << result << endl;

}