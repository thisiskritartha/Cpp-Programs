//sum of all subarrays

#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //sums of subarrays
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}