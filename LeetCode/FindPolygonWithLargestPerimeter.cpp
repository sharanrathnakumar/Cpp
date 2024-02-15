#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    long long largestPerimeter(std::vector<int>& nums) {
        long long sum =0;
        long long otherSides = 0;

        for(int &value : nums) {
            sum += value;
        }
		std::sort(nums.begin(), nums.end(), std::greater<int>());

        for(int i =0; i < nums.size(); i++) {
            otherSides = sum - nums[i];

            if (otherSides > nums[i]) {
                return sum;
            } else {
                sum = otherSides;
            }
        }
        return -1;
    }
};


int main() {
	std::vector<int> nums = {1,12,1,2,5,50,3};
	Solution S1;

	long long result =  S1.largestPerimeter(nums);

	std::cout << "The largest perimeter is: " << result << std::endl;

    return 0;	
}
