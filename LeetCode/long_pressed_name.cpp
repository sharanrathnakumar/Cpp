#include<iostream>

class Solution {
public:
    bool isLongPressedName(std::string name, std::string typed) {
         int i = 0, j = 0;

    while (j < typed.size()) {
        if (i < name.size() && name[i] == typed[j]) {
            ++i;
            ++j;
        } else if (j > 0 && typed[j] == typed[j - 1]) {
            ++j;
        } else {
            return false;
        }
    }
    return i == name.size();
    }
};

int main()
{
	std::string name;
    std::string typed;

	std::cout << "Enter name: "; std::cin >> name;
	std::cout << "Enter typed: "; std::cin >> typed;

	Solution S1;
    
    if (S1.isLongPressedName(name, typed)) {
        std::cout << "The name is long pressed." << std::endl;
    } else {
        std::cout << "The name is not long pressed." << std::endl;
    }

    return 0;
}
