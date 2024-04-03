#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=10,digit=1;
    for(int i=0;i<1000;i++){
        if (n/num==0){
            cout<<digit;
            return 0;
        }
        num=num*10;
        digit++;
    }
}