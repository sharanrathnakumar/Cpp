#include<iostream>
#include<vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int index = 0;

        if(nums.size() == 1) {
			return 1;
		}

        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[index]) {
                index++;
                nums[index] = nums[i];
            }
        }

        return ++index;
    }
};


int main()
{
	int size =0;
	std::vector<int> arr;

	std::cout << "Enter the array size: "; std::cin >> size;

	for(int i =0; i<size; i++) {
		int tmp;
		std::cout << "Enter value " << i+1 << " :" << std::endl; std::cin >> tmp;
		arr.push_back(tmp);
	}

	std::cout << "Array after removing duplicates: " << std::endl;

	Solution S1;
	
	size = S1.removeDuplicates(arr);

	for(int i =0; i<size; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
