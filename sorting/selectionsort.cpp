#include <bits/stdc++.h>
using namespace std;

void Selectionsort(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {  // Use j < n here
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Selectionsort(n, arr);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
