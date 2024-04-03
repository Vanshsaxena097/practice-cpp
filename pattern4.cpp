#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int row=0;row<4; row++){
        for(int col=0;col<6;col++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

}