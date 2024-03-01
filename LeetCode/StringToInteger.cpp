#include <string>
#include <climits>
#include <iostream>


int myAtoi(std::string s) {
    int i = 0;
    int sign = 1;
    long long result = 0;

    while (i < s.length() && s[i] == ' ') {
        i++;
    }

    if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i++] == '-') ? -1 : 1;
    }

    while (i < s.length() && isdigit(s[i])) {
        result = result * 10 + (s[i++] - '0');

        if (result * sign < INT_MIN) {
            return INT_MIN;
        } else if (result * sign > INT_MAX) {
            return INT_MAX;
        }
    }

    return result * sign;
}

int main() {
	std::string s;
	std::cout << "Enter the string: "; std::cin >> s;
    
	std::cout << "Result: " << myAtoi(s) << std::endl;
    return 0;
}

