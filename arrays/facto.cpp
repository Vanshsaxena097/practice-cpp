#include<bits/stdc++.h>
using namespace std;
int facto(int n){
    int d=1;
    for (int i = 1; i <=n ; i++)
    {
        d=d*i;
    }

    return d;
    
}
int main(){
    int n;
    cin>>n;
    cout<<facto(n);
}