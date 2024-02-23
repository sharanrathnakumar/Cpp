#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> applyOperations(std::vector<int>& nums) {
        
        for(int i =0; i < nums.size()-1; i++) {
            if(nums[i] == nums[i+1]) {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }

        int index =0;
        for(int i =0; i < nums.size(); i++) {
            if(nums[i] != 0) {
				std::swap(nums[index++],nums[i]);
            }
        }
        return nums;
    }
};


int main()
{
	std::vector<int> nums = {1,2,2,1,1,0}, nums2;

	Solution S1;
	nums2 = S1.applyOperations(nums);

	std::cout << "Array After operation: ";

	for( int &value: nums2) {
		std::cout << value << " ";
	}

	std::cout << std::endl;
	return 0;

}
