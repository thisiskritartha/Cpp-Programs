#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<(n-1); i++){
        for(int j=(i+1); j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int inc = 0, index;
//     while(n>inc){
//         int small = INT_MAX;
//         for(int i=inc; i<n; i++){
//           if(arr[i] < small){
//             small = arr[i];
//             index = i;
//           }
//         }
//         int temp = arr[inc];
//         arr[inc] = small;
//         arr[index] = temp;
//         inc++;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }