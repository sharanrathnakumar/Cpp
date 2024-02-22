#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int seniorCitizen = 0;

         for (std::string str : details ) {
             int age = stoi(str.substr(11,2));
             if (age > 60 ) {
                 seniorCitizen++;
             }
         }
         return seniorCitizen;
    }
};


int main() {

	Solution S1;

	std::vector<std::string> details;
	details =  {"7868190130M7522","5303914400F9211","9273338290F4010"};

	std::cout << "The number of senior citizens " << S1.countSeniors(details) << std::endl;

	return 0;
}
