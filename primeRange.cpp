//Print all the prime number in between the given ranges.

#include<iostream>

using namespace std;

void prime(int a, int b);  //function declaration

int main(){
    int n1, n2;
    cout<<"Enter the number1(lower Part Number)"<<endl;
    cin>>n1;
    cout<<"Enter the number2(Upper Part Number)"<<endl;
    cin>>n2;
    prime(n1, n2);  //function call
    return 0;
}

void prime(int a, int b){   //function call
    int j;
    for(int i=a; i<=b; i++){
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
        if(i == j){
            cout<<i<<" ";
        }
    }
}