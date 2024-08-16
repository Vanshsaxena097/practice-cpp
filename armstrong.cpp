#include <bits/stdc++.h>
using namespace std;

bool armstrong(int num) {
    int k = to_string(num).length();
    int sum = 0;
    int n = num;
    while (n > 0) {
        int ld = n % 10;
        sum += pow(ld, k);
        n = n / 10;
    }
    return sum == num;
}

int main() {
    int n = 153;
    
    if (armstrong(n)) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    return 0;
}
