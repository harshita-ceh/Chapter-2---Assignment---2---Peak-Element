#include <iostream>
using namespace std;
//using concept of binary search
int findPeakElement(int arr[],int low,int high,int n){
  int mid = low+(high - low)/2;
  if((mid == 0 ||arr[mid - 1] <= arr[mid]) && (mid == n-1 || arr[mid + 1] <= arr[mid]))
  return mid;
  else if(mid>0 && arr[mid-1] > arr[mid])
  return findPeakElement(arr,low,(mid - 1),n);
  else return findPeakElement(arr,(mid +1),high,n);
}

int findPeak(int arr[],int n){
  return findPeakElement(arr,0,n-1,n);
} 
int main() {
  int i;
  int arr[]={10,15,13,5,17,13};
  //cout<<"enter elements= "<<endl;
  //cin>>arr[i];
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Index of peak elements is  "<<findPeak(arr,n)<<endl;
  return 0;
} 