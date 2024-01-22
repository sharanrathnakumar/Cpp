#include <iostream>
#include <cmath>

class Solution {
public:
    int arrangeCoins(int n) {
        return (-1 + std::sqrt(1 + 8L * n)) / 2;
    }
};


int main() {
    int coins;
	std::cout << "Enter number of coins: "; std::cin >> coins;
	Solution S1;

    std::cout << "Maximum full staircases with " << coins << " coins: " << S1.arrangeCoins(coins) << std::endl;

    return 0;
}

