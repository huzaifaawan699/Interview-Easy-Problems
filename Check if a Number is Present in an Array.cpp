#include<iostream>
using namespace std;


bool findarray(int arr[], int n, int searchnumber){
    for(int i = 0; i < n; i++){
        if(arr[i] == searchnumber){
            return true; 
        }
    }
    
    return false;
}

int main(){
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchnumber = 1;
    if(findarray(arr, n, searchnumber)){
        cout << "Number is Found: " << searchnumber << endl;
    } else {
        cout << "Number is Not Found: " << searchnumber << endl;
    }
    return 0;
}
