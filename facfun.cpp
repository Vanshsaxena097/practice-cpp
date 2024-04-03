#include<iostream>
using namespace std;
int factorial(int num){
    int a=1;
    for(int i=1;i<=num;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int num;
    cin>>num;
    int fact=factorial(num);
    cout<<fact;
    return 0;
}