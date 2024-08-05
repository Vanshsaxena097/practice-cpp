#include <bits/stdc++.h>
using namespace std;

//2n+1
void erectp(int n) {
	for(int i=0;i<n;i++){
		for (int j = 0; j <n-i-1; j++)
		{
			cout<<" ";
			
		}
		
		for(int j=0;j<2*i+1;j++){
			cout<<"*";
		}
		for (int j = 0; j <n-i-1; j++)
		{
			cout<<" ";
			
		}
		cout<<endl;
		
		
	}
}

void invertedp(int n){
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<i; j++)
		{
			cout<<" ";
		}
		for (int j = 0; j<2*n-(2*i+1); j++)
		{
			cout<<"*";
		}
		for (int j = 0; j<i; j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	

}
int main(){
	int n;
	cin >>n;
	erectp(n);
	invertedp(n);
	return 0;
}