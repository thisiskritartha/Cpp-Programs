//factorial of number n

#include<iostream>

using namespace std;

//Using Recursion
// int fact(int a){
//     if(a == 0){
//         return 1;
//     }
//     return a * fact(a-1);
// }

int fact(int a){
    int sum = 1;
    for(int i=1; i<=a; i++){
        sum = i * sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number to find its Factorial."<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}