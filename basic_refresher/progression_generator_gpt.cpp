#include <iostream>
#include <string>

class Progression {
private:
    int firstTerm;
    int commonDifference;
    int numTerms;

public:
    Progression(int a, int b, int c) : firstTerm(a), commonDifference(b), numTerms(c) {}

    void printProgression(const std::string& progressionType) const {
        int term = firstTerm;
		int gp = firstTerm;
        std::cout << progressionType << ": ";
        for (int i = 0; i < numTerms; ++i) {
            if (i > 0) {
                std::cout << ", ";
            }

            if (progressionType == "AP") {
                std::cout << term;
            } else if (progressionType == "GP") {
                std::cout << gp;
				gp *= commonDifference;
            } else if (progressionType == "HP") {
                std::cout << 1.0 / term;
            }

            term += commonDifference;
        }

        std::cout << std::endl;
    }
};

int main() {
    int firstTerm, commonDifference, numTerms;

    // User input
    std::cout << "Enter the First Number 'A': ";
    std::cin >> firstTerm;
    std::cout << "Enter the Common Difference / Ratio 'R': ";
    std::cin >> commonDifference;
    std::cout << "Enter the number of terms 'N': ";
    std::cin >> numTerms;

    // Validate input
	    if (numTerms <= 0 || commonDifference <= 0) {
        std::cout << "Invalid Entry :(" << std::endl;
        return -1;
    }

    // Create an instance of the Progression class
    Progression progression(firstTerm, commonDifference, numTerms);

    // Call the member function to print AP, GP, and HP
    progression.printProgression("AP");
    progression.printProgression("GP");
    progression.printProgression("HP");

    return 0;
}

