//Reverse the given number

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the given number to reverse it."<<endl;
    cin>>n;
    int num = n;
    int rem, sum = 0;
    while(n!=0){
        rem = n%10;
        sum = sum * 10 + rem;
        n = n/10;
        }
    cout<<"The reverse of "<<num<<" is "<<sum;
    return 0;
}