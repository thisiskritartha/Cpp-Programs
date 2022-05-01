//Check if a given number is prime or not.

#include<iostream>

using namespace std;

//Logic1
int main(){
    int n;
    cout<<"Enter the Number."<<endl;
    cin>>n;
    int check = 0;
    int i;
    for(i=1; i<=n; i++){
        if(n%i == 0){
            check++;
        }
    }
    if(check == 2){
        cout<<"Given Number is Prime."<<endl;
    }
    else{
        cout<<"Given Number isnot Prime."<<endl;
    }
    return 0;
}


//Logic2
// int main(){
//     int n;
//     cout<<"Enter the number to check Prime."<<endl;
//     cin>>n;
//     int i;
//     for(i=2; i<n; i++){
//         if(n%i == 0){
//             cout<<"Given Number is not a Prime Number."<<endl;
//             break;
//         }
//     }
//     if(i == n){
//         cout<<"Given Number is Prime."<<endl;
//     }
//     return 0;
// }