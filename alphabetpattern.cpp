#include<bits/stdc++.h>
using namespace std;
void right(int n){
    for (int i = 0; i <=n; i++)
    {
        for (char j = 'A'; j <='A'+(n-i-1); j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    right(n);
    return 0;
}