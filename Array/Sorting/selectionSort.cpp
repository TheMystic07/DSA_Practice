#include "SortingFuncs.cpp"
#include <iostream>
using namespace std;

void selectionSort(int *arr,int size){
  for(int i=0;i<size-1;i++){
    int min=i;
    for(int j=i;j<size;j++){if(arr[j]<arr[min]) min=j;}
    swap(arr[i],arr[min]);}}

int main(){
  int *arr = getArray(20,0,100);
  printArray(arr,10);
  selectionSort(arr,10);
  printArray(arr,10);}
