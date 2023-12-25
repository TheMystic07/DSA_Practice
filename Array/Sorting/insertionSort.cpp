#include "SortingFuncs.cpp"
#include <iostream>
/*
void insertionSort (int * arr,int size){
  for(int i=0;i<size;i++){
    int j=i;
    while (j>0&& arr[j]<arr[j-1]) {
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
}*/
void insertionSort(int * arr,int size){
  int key,j,i;
  for(i=1;i<size;i++){
    key=arr[i];
    j=i-1;
    while (j>=0&&key<arr[j]) {
      arr[j+1]=arr[j];
      j--;}
    arr[j+1]=key;

  }
}
int main (int argc, char *argv[]) {
  int * arr=getArray(100,0,99 );
  printArray(arr,100);
  insertionSort(arr,100);
  printArray(arr,100);
  
  return 0;
}
