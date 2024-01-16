#include<iostream>
#include<vector>


class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        
        int low=0, high = nums.size()-1;

        while( low <= high ) {
            int mid = (low + high)/2;

            if( nums[mid] == target ) {
                return mid;
            }

            if(nums[low] <= nums[mid] ) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if( nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid -1;
                }
            }
        }
        return -1;
    }
};


int main() {
	int size =0, tmp =0, target =0;
	std::vector<int> vector;

	std::cout << "Enter the size of the array: "; std::cin >> size;

	std::cout << "Enter the elements: ";

	for(int i=0; i<size; i++){
		std::cin >> tmp;
		vector.push_back(tmp);
	}

	std::cout << "Enter the target number: "; std::cin >> target;

	Solution s1;
	target = s1.search(vector, target);

	if(target == -1) {
		std::cout << "Number not present" << std::endl;
	} else {
		std::cout << "The index is : " << target << std::endl;
	}

}
