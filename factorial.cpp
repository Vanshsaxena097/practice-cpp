 #include<iostream>
 using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++)
        fact=fact*i;
        return fact;
 }
 int main(){
    int num;
    cin>>num;
    int ans=fact(num);
    cout<<ans;
    return 0;
}
 