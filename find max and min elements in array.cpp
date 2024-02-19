#include<iostream>
using namespace std;
int maximumarray(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
        
    }
    return max;
}
int minimumarray(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            
        }
    }
    return min;
    
}
int main(){
    int arr[]={5,8,3,4,5,90,54,45,3,23,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum Array is :"<<maximumarray(arr,n)<<endl;
    cout<<"Minimum Arrau is :"<<minimumarray(arr,n)<<endl;
}
