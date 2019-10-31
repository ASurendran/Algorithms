#include<iostream>
#include<map>
using namespace std;



void maxMin(int arr[], int size) {
  // Write your code here
  
  int * arrNew = new int[size];
  int i=0, k =0, j = size-1;
  
  while(k<size){

      arrNew[k++] = arr[j--];
      arrNew[k++] = arr[i++];
  }
  for(int p =0; p<size;p++)
    cout<<arrNew[p]<<" ";

  return;
}

int main(){
    int arr[] = { 12,23,34,45,56,67,78};

    maxMin(arr,  sizeof(arr)/sizeof(int));
    return 0;
}