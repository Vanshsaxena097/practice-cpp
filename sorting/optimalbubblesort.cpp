#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    if(n==1) return;
    int didSwap =0;
    for (int i = 0; i <= n-2; i++)
    {
        if (arr[i]>arr[i+1])
        {
            int temp=arr[i+1];
            arr[i+1]= arr[i];
            arr[i] = temp;
            didSwap = 1;
        }
        
    }
    if(didSwap ==0) return;
    bubblesort(arr,n-1);
    
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubblesort(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}