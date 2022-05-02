//Combination nCr

#include<iostream>

using namespace std;

int fact(int a){
    if(a == 0){
        return 1;
    }
    else{
        return a * fact(a-1);
    }
}

int main(){
    int n, r;
    float comp;
    cout<<"Enter the number of Items."<<endl;
    cin>>n;
    cout<<endl<<"Enter the number of items to be choosen."<<endl;
    cin>>r;
    //check
    if(n<r){
        cout<<"Not the valid Condition."<<endl;
        return 0;
    }
    
    comp = (fact(n))/(fact(r) * fact(n-r));
    cout<<n<<"C"<<r<<" = "<<comp<<" Possible Combinations";
    return 0;
}