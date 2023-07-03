#include "SortingFuncs.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int *arr,int size){
  for(int i=0;i<size;i++){cout<<arr[i]<<" ";} cout<<endl;}

  int * getArray(int size,int min=0,int max=100){
    int * arr = new int[size];
    srand(time(nullptr));
    for (int i=0;i<size;i++){
      arr[i]=rand() % (max-min+1)+min;
    }
    return arr;
  }
