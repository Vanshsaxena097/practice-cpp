#include<iostream>
using namespace std;
int add(int n1,int n2){
    int ans= n1+n2;
    return ans;
}
float add(float n1,float n2){
    int ans=n1+n2;
    return ans;
}
int add(int n1,int n2,int n3){
    int ans=n1+n2+n3;
    return ans;
}
int main(){
    int a=add(9,6);
    cout<<a<<endl;
    int b=add(24,913,5);
    cout<<b<<endl;
   // cout<<endl;
    float c=(9.3,5.6);
    cout<<c<<endl;

}