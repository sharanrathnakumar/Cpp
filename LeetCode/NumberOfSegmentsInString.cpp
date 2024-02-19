#include <iostream>
#include <string>

class Solution {
public:
    int countSegments(std::string s) {
        int count =0;
        bool isSegment = false;

        for (char ch : s) {
            if( ch != ' ') {
                if (!isSegment) {
                    isSegment = true;
                    count++;
                }
            } else {
                isSegment = false;
            }
        }
        return count;
    }
};

int main() {
	std::string input;
	Solution S1;

	std::cout << "Enter the string: ";
	std::getline(std::cin, input);
	std::cout << "The number of string is: " << S1.countSegments(input) << std::endl;

	return 0;
}
