//Fibonacci sequence

#include<iostream>

using namespace std;

void fibo(int n){
    int a = 0, b = 1, sum;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=n; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
}

int main(){
    int n;
    cout<<"Enter number of fibonacci sequence."<<endl;
    cin>>n;
    fibo(n);
    return 0;
}