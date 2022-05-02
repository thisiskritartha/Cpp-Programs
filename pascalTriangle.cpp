#include<iostream>

using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

void comp(int a, int b){
    int sum;
    sum = (fact(a)) / (fact(b) * fact(a-b));
    cout<<sum<<" ";
}

int main(){
    int n, i;
    cout<<"Enter the number of Rows."<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<(i+1); j++){
            comp(i, j);
        }
        cout<<endl;
    }
    return 0;
}