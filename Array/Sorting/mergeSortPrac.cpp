#include <iostream>

void merge(int * arr, int low ,int mid,int high){
  int left = low;
  int right = mid+1;
  int temp[ (high-low)+1];
  int i=0;
  while(low<mid+1 && right <=high){
    if(arr[left]<=arr[right]){
      temp[i++]=arr[left++];
      
    }else{
      
      temp[i++]=arr[right++];
    }

  }
    while(left<mid+1){
      temp[i++]=arr[left++];
    }
    while(right<high){
      temp[i++]=arr[right++];
    }
  for (int j = low; i < high; j++) {
    arr[j]= temp[j-low];
  }
}

void mergeSort(int *arr, int low,int high){
  if(low>=high) return;
  int mid = (low + high )/2;
  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);
  merge(arr,low,mid,high);
}

int main (int argc, char *argv[]) {
  int arr[]={5,6,3,2,5,7,1,0};
  mergeSort(arr,0,8);
  for (int  i = 0; i < 9; i++) {
    std::cout << arr[i]<<" "; 

  }
      std::cout<< std::endl;
  return 0;
}
