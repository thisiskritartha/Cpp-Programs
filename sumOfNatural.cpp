//WAP to find sum of first Natural number

#include<iostream>

using namespace std;

//Method1
int main(){
    int sum = 0;
    int n;
    cout<<"Enter the number of Terms."<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<sum;
    return 0;
}


//Method2
// int main(){
//     int n;
//     cout<<"Enter the number of terms."<<endl;
//     cin>>n;
//     int sum = (n * (n+1))/2;
//     cout<<sum;
//     return 0;
// }