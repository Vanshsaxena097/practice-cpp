#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
        } else if (!isalnum(s[right])) {
            right--;
        } else if (tolower(s[left]) != tolower(s[right])) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    bool ans = palindrome(str);

    if (ans == true) {
        cout << "is palindrome" << endl;
    } else {
        cout << "not a palindrome" << endl;
    }

    return 0;
}
