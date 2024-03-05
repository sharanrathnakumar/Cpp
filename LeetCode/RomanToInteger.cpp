#include <iostream>
#include <unordered_map>

int romanToInt(std::string s) {
    std::unordered_map<char, int> romanToIntMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (i < n - 1 && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
            result -= romanToIntMap[s[i]];
        } else {
            result += romanToIntMap[s[i]];
        }
    }
    return result;
}

int main() {
    std::string romanNumeral = "MCMXCIV";
    int integerEquivalent = romanToInt(romanNumeral);
    std::cout << "Integer equivalent of " << romanNumeral << " is: " << integerEquivalent << std::endl;
    return 0;
}

