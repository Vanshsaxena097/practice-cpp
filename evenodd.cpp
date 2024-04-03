#include<iostream>
using namespace std;
void isEvenOdd(int num){
    if((num%2)==0)
        cout<<"Even"<<endl;
    else
        cout <<"odd" <<endl;
   return;        
}
int main(){
    int num1,num2,num3,num4;
    cin>>num1>>num2>>num3>>num4;
    isEvenOdd(num1);
    isEvenOdd(num2);
    isEvenOdd(num3);
    isEvenOdd(num4);
    return 0;
}