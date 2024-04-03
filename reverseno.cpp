#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    sum=0;
    while(n){
        int digit= n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    cout<<sum;
    return 0;
}