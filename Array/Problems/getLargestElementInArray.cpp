#include "getRandomArray.cpp"
#include <iostream>
using namespace std;
int getLargestArrayInArray(int *arr,int size){
  int largestElement = -1;
  for(int i=0;i<size;i++){if(largestElement<arr[i])largestElement=arr[i];} return largestElement;
}
int main (int argc, char *argv[]) {
  int * arr =getArray(10,0,100);
  printArray(arr,10);
  cout << "The Largest Element is :"<<getLargestArrayInArray(arr,10) << endl;
  return 0;
}

