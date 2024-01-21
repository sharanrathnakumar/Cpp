#include<iostream>
#include<vector>

class Solution {
public:
    int longestMountain(std::vector<int>& arr) {
         int n = arr.size();
    int result = 0;

    for (int peak = 1; peak < n - 1; ++peak) {
        if (arr[peak - 1] < arr[peak] && arr[peak] > arr[peak + 1]) {
            int left = peak - 1;
            int right = peak + 1;

            while (left > 0 && arr[left - 1] < arr[left]) {
                --left;
            }

            while (right < n - 1 && arr[right] > arr[right + 1]) {
                ++right;
            }

            result = std::max(result, right - left + 1);
        }
    }

    return result;
    }
};


int main()
{
	std::vector<int> arr;
	int size = 0;
	Solution S1;

	std::cout << "Enter the size: "; std::cin >> size;

	for(int i = 0; i < size; i++) {
		int tmp;
		std::cin >> tmp;
		arr.push_back(tmp);
	}
    std::cout << "Length of the longest mountain: " << S1.longestMountain(arr) << std::endl;

    return 0;
}
