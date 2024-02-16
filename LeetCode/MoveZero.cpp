#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int index =0;
        for(int i =0; i < nums.size(); i++) {
            if(nums[i] != 0) {
				std::swap(nums[index++], nums[i]);
            }
        }
    }
};

int main() {
	std::vector<int> nums = {0,1,0,3,12};

	Solution S1;
	S1.moveZeroes(nums);

	std::cout << "Array After moving zeros to the end: ";

	for( int &value: nums) {
		std::cout << value << " ";
	}

	std::cout << std::endl;
	return 0;
}
