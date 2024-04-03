#include<iostream>
using namespace std;
int main(){
    for(int row =0; row<4;row++){
        char c='a'+row;
        for(int col=0;col<4;col++){
            cout<<c<<" ";
        }
        cout <<endl;
    }
}