#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter the three Positive number to check Pythagorian triplet."<<endl;
    cout<<"First Number"<<endl;
    cin>>a;
    cout<<"Second Number"<<endl;
    cin>>b;
    cout<<"Third Number"<<endl;
    cin>>c;
    if(a*a + b*b == c*c){
        cout<<"Given integers satisfies the Puthagorian triplet."<<endl;
    }
    else{
        cout<<"Given integers doesn't satisfie the Puthagorian triplet."<<endl;
    }
    return 0;

}