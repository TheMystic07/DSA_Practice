#include "SortingFuncs.cpp"
#include <iostream>
void merge(int * arr,int low,int mid ,int high){
  int left=low;
  int right=mid+1;
  int temp[high];
  int i=0;
  while (left<=mid && right<=high){
    if (arr[left]<=arr[right]){
      temp[i]=arr[left];
      left++;i++;
    }else{
      temp[i]=arr[right];
      right++;i++;
    }
    }
    while(left<=mid){
      temp[i]=arr[left];
      left++;i++;}
    while(right<=high){
      temp[i]=arr[right];
      right++;i++;
    }
  for(int j=low;j<=high;j++){
    arr[j]=temp[j-low];
  }
  
}

void mergeSort(int *arr,int low,int high){
  if(low>=high)return;
  int mid=(low+high)/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
}


int main (int argc, char *argv[]) {
  int * arr=getArray(20,0,100);
  printArray(arr,20);
  mergeSort(arr,0,19);
  printArray(arr,20);
  return 0;
} 
