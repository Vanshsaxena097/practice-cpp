#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int n=2;n<=num-1;n++){
        if(num%n==0){
            cout<<"Not prime";
            break;
        }
        cout<<"prime number"<<endl;
        break;
    }
    return 0;
}