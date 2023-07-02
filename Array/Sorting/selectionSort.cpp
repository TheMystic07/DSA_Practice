#include <iostream>
using namespace std;
void printArray(int *arr,int size){
  for(int i=0;i<size;i++){cout<<arr[i]<<" ";}
  cout<<endl;}

void selectionSort(int *arr,int size){
  for(int i=0;i<size-1;i++){
    int min=i;
    for(int j=i;j<size;j++){if(arr[j]<arr[min]) min=j;}
  swap(arr[i],arr[min]);}}

int main(){
  int arr[10]={60,70,50,30,20,10,90,80,40,0};
  printArray(arr,10);
  selectionSort(arr,10);
  printArray(arr,10);
}
