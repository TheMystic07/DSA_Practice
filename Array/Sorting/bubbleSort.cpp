#include <iostream>
#include "SortingFuncs.cpp"

void bubbleSort(int *arr,int size){
  for(int i=0;i<size;i++){
    for(int j=0;j<size-1;j++){if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);}}}

int main (int argc, char *argv[]) {
  int * arr=getArray(20,1,100);
  printArray(arr,20);
  bubbleSort(arr,20);
  printArray(arr,20);
  return 0;

}
