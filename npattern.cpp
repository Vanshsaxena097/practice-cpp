#include<bits/stdc++.h>
using namespace std;
void newp(int n){
    for (int i = 1; i <=n; i++)
    {
        int start=1;
        if(i%2==0) start=0;
        for(int j=1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
}   
int main(){
    int n;
    cin>>n;
    newp(n);
    return 0;
}