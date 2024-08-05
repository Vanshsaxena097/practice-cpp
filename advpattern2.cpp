#include<bits/stdc++.h>
using namespace std;
//3*i-n
void right(int n ){
    int num=1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<num<<" ";
            num=num+1;
            
        }
        cout<<endl;

        
    }//2*3-2
    
}
int main(){
    int n;
    cin>>n;
    right(n);
    return 0;
}