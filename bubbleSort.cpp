//Repeatedly swap the element if they are in wrong order till (n-1) pass. In first iteration, run loop till n-1, second iteration run loop till (n-2) and continue in same manner ...

#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    int pass = 1;
    int temp;
    while(pass <= (n-1)){
     for(int i=0; i<n-pass; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
         }
      }
      pass++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    return 0;
}