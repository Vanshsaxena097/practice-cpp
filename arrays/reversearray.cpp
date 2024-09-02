#include <bits/stdc++.h>
using namespace std;

void print(int rev[], int n) {
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n) {
    int rev[n];
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }
    print(rev, n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);
    return 0;
}
