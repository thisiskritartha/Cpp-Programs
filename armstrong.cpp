#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the Number."<<endl;
    cin>>n;
    int rem, sum=0;
    int ans = n;
    while(n!=0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    cout<<sum<<endl;
    if(sum == ans){
        cout<<"The given number is Armstrong Number."<<endl;
    }
    else{
        cout<<"The given Number is not Armstrong Number."<<endl;
    }
    return 0;
}