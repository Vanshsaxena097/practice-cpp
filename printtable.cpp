#include<iostream>
using namespace std;
void printTable(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    printTable(n);
    printTable(13);
    return 0;
}
// pg72