#include "SortingFuncs.cpp"
#include <iostream>
int sort(int* arr,int low,int high){
  int i = low+1;
  int j = high;
  int pvt = arr[low];
  while (i<j) {
    while(arr[i]<=pvt && i<=high-1){
      i++;
    }
    while(arr[j]>pvt&j>=low){
      j--;
    }
    if(i<j)swap(arr[i],arr[j]);
  }
  swap(arr[low],arr[j]);
  return j;


}

void quickSort(int  *arr, int low,int high){
  if(low<=high){
  int pvt = sort(arr,low,high);
  quickSort(arr,low,pvt-1);
  quickSort(arr,pvt+1,high);
  }
}

int main (int argc, char *argv[]) {
  int *arr=getArray(20,0,50);
  printArray(arr,20);
  quickSort(arr,0,19);
  printArray(arr,20);
  return 0;
}
