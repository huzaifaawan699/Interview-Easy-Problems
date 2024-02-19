#include<iostream>
using namespace std;
int missingarray(int arr[],int n){
int total_sum=(n*(n+1))/2;

  int array_sum=0;
  for(int i=0;i<n;i++)
    {
      array_sum+=arr[i];
    }
  return total_sum - array_sum;
  
}
int main(){
int arr[] ={0,1,2,3,5,6,7};
  int n=sizeof (arr)/sizeof(arr[0]);
  cout<<"The Missing Number is :"<<missingarray(arr,n)<<endl;
  return 0;
  
}
