#include <iostream>
#include <climits>

int reverseInteger(int x) {
    int reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;
        // Check for overflow before adding the digit
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) return 0; // INT_MAX = 2147483647
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) return 0; // INT_MIN = -2147483648
        reversed = reversed * 10 + digit;
    }
    return reversed;
}

int main() {
    int num = 123456;
    std::cout << "Original: " << num << std::endl;
    int reversed = reverseInteger(num);
    std::cout << "Reversed: " << reversed << std::endl;
    return 0;
}

