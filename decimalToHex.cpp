//Decimal to Hexadecimal

#include<bits/stdc++.h>

using namespace std;

void decimalToHex(int n){
    vector <char> hex;
    while(n>0){
        int rem = n%16;
        if(rem>=0 && rem<=9){
            hex.push_back(rem+48);
        }
        else if(rem>=10){
            hex.push_back(rem+55);
        }
        n /= 16;
    }
    for(int i=(hex.size()-1); i>=0; i--){
        cout<<hex[i];
    }
}

int main(){
    int dec;
    cin>>dec;
    decimalToHex(dec);
    return 0;
}