#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> findClosestElements(std::vector<int>& arr, int k, int x) {
            int left = 0;
    int right = arr.size() - k;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (x - arr[mid] > arr[mid + k] - x) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return std::vector<int>(arr.begin() + left, arr.begin() + left + k);   
    }
};


int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
	Solution S1;

    int k = 3;
    int x = 3;

    std::vector<int> result = S1.findClosestElements(arr, k, x);

    std::cout << "K closest elements to " << x << ": ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
