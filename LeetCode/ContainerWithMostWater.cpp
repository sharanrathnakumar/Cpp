#include <iostream>
#include <vector>
#include <algorithm>


int maxArea(std::vector<int>& height) {
    int maxArea = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int minHeight = std::min(height[left], height[right]);
        int currentArea = minHeight * (right - left);
        maxArea = std::max(maxArea, currentArea);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
	std::vector<int> height;
	int width =0;
	std::cout << "Enter the width:"; std::cin >> width;
	std::cout << "Enter the array contents: ";

	for(int i =0; i < width; i++) {
		int temp;
		std::cin >> temp;
		height.push_back(temp);
	}

	std::cout << "The max area is: " << maxArea(height) << std::endl;
    return 0;
}

