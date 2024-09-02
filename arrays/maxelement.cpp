#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {2, 3, 11, 8, 7, -2};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    cout<<n<<endl;

    int largest = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "The largest element in the array is: " << largest << endl;
    return 0;
}
