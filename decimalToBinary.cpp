//Convert Decimal to binary

#include<bits/stdc++.h>

using namespace std;

void decimalToBinary(int n){
    vector <int> bin;
    while(n > 0){
        bin.push_back(n%2);
        n /= 2;
    }
    for(int i=(bin.size()-1); i>=0; i--){
        cout<<bin.at(i);
    }
}

int main(){
    int dec;
    cin>>dec;
    decimalToBinary(dec);
    return 0;
}