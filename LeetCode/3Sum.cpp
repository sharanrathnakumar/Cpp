#include <iostream>
#include <vector>
#include <algorithm>


void printArray(const std::vector<int>& arr) {
	std::cout << "[";
    for (int i = 0; i < arr.size(); ++i) {
		std::cout << arr[i];
        if (i < arr.size() - 1) {
			std::cout << ", ";
        }
    }
	std::cout << "]" << std::endl;
}

void printResult(const std::vector<std::vector<int>>& result) {
	std::cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        printArray(result[i]);
    }
	std::cout << "]" << std::endl;
}

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
	std::vector<std::vector<int>> result;
    int n = nums.size();
    if (n < 3) {
        return result;
    }

	std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
	std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
	std::cout << "Input array: ";
    printArray(nums);
	std::vector<std::vector<int>> result = threeSum(nums);
	std::cout << "Result: ";
    printResult(result);
    return 0;
}

