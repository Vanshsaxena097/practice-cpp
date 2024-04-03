#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1; row<=n;row++){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        for(int col=1; col<=n*2-2*row;col++){
            cout<<" ";
        }
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
 
    }
     //2nd part
     for(int row=1;row<n-1;row++){
        for(int col=1;col<=n-row;col++)
            cout<<"*";
        for(int col=1;col<=2*row;col++)
            cout<<" ";
        for(int col=1;col<n-row;col++)
            cout<<"*";
        cout<<endl;            
     }
     return 0;

}
//pg 54
