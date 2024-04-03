#include<iostream>
using namespace std;
int main(){
    for(int row=0;row<4;row++){
        char c='a';
        for(int col=0; col<4;col++){
            c='a'+ col;
            cout<<c<<" ";

        }
        cout<<endl;
    }
}