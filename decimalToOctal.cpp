//Decimal to octal conversion

#include<bits/stdc++.h>

using namespace std;

void decimalToOctal(int n){
    vector <int> oct;  
    while(n>0){
        oct.push_back(n%8);
        n /= 8;
    }
    for(int i=(oct.size()-1); i>=0; i--){
        cout<<oct.at(i);
    }
}

int main(){
    int dec;
    cin>>dec;
    decimalToOctal(dec);
    return 0;
}