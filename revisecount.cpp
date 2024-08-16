#include <bits/stdc++.h>
using namespace std;

void logic(int n){
    int rev=0;

    while(n>0){
        
        int digits=n%10;
        rev=(rev*10)+digits;
        n=n/10;
    }
    cout<<rev;
}
int main(){
    int n;
    cin>>n;
    logic(n);
    return 0;
}