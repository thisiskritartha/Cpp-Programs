//Binary Addition

#include<bits/stdc++.h>

using namespace std;

int add(int b1, int b2){
    int x = max(b1, b2);
    int y = min(b1, b2);
    int sum = 0, carry = 0, place = 1;
    int a, b;
    while(x>=0){  
        a = x%10;
        b = y%10;
        sum = ((a+b+carry)%2)*place + sum;
        carry = (a+b+carry)/2;
        place *= 10;
        x /= 10;
        y /= 10;
        if(x==0 && carry==0){ //Here, the 'x' is never negative. So, to terminate the while loop, we must give 
            break;            //break condition to jump out of while loop.
        }
    }
    return sum;
}

int main(){
    int bin1, bin2;
    cin>>bin1>>bin2;
    cout<<add(bin1, bin2);
    return 0;
}