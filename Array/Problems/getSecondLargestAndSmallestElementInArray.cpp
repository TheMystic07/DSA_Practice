#include "getRandomArray.cpp"
#include <iostream>
#include <limits.h>
using namespace std;
int * getSecondLargestArrayInArray(int *arr,int size){
  int largestElement = INT_MIN, secondLargestElement=INT_MIN+2;
  int smallestElement = INT_MAX,secondSmallestElement=INT_MAX-1;
  for(int i=0;i<size;i++){if(largestElement<arr[i])largestElement=arr[i];
                          if(smallestElement>arr[i])smallestElement=arr[i];}
  for(int i=0;i<size;i++){if(secondLargestElement<arr[i]&&arr[i]<largestElement)secondLargestElement=arr[i];
                          if(secondSmallestElement>arr[i]&&arr[i]>smallestElement)secondSmallestElement=arr[i];}
  int * r =new int[2];
  r[0] = secondLargestElement;
  r[1]=secondSmallestElement;
  return r;  
}
int main (int argc, char *argv[]) {
  int * arr =getArray(10,0,100);
  printArray(arr,10);
  cout << "The Second Largest Element is :"<<getSecondLargestArrayInArray(arr,10)[0] << endl;
  cout << "The Second Smallest Element is :"<<getSecondLargestArrayInArray(arr,10)[1] << endl;
  return 0;
}

