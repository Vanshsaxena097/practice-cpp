#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int current ;
    for(int i=3;i<=n;i++){
        current=first+second;
        first=second;
        second =current;
    }
    cout<<current;
    return 0;

}