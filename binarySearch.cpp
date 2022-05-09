//Dividing the given list in two Sublist equally ie through midpoint. Then, compare the given mid-element with key (i.e either smaller or greater). If the key is greater than mid-element, search in the right sublist otherwise in left sublist.

#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, n, key);
    return 0;
}