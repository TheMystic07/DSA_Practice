#include "getRandomArray.cpp"
#include <iostream>
void rotateArrayByOne(int * arr, int n) {
    int temp=arr[0];
      for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

void rotateArray (int * arr, int n , int d){
  d=d%n;// anyting eual to the size will be same as the original array do anything above that will eb that + remainder 
  int temp[d];//temp array to store  values to be rotated
  for(int i=0;i<d;i++){temp[i]=arr[i];}//coping value to temproray array 
  for(int i=d;i<n;i++){arr[i-d]= arr[i];}//shifting array to free up last space , i is d because we need to repllace that values with starting indedxees that will be i-d 
  for(int i=n-d;i<n;i++){arr[i]=temp[i - (n-d)];}}//coping the temp value to the origian array's last 1

void reverse(int *arr,int start,int end){
  while(start<end){
    swap(arr[start],arr[end]);
    start++;end--;
  }
}
void rotateArrayOptimal(int * arr,int n,int d){
  d%=n;
  reverse(arr,0,d-1);
  reverse(arr,d,n-1);
  reverse(arr,0,n-1);
}




int main (int argc, char *argv[]) {
  /* int * arr = getArray(5,0,5); */
  int arr[5]={1,2,3,4,5};
  printArray(arr,5);
  rotateArrayOptimal(arr,5,4);
  printArray(arr,5);
  
  return 0;
}

