#include<iostream>
#include<vector>

class Solution {
public:
    int numSubarrayProductLessThanK(std::vector<int>& nums, int k) {
        if ( k <= 1)
        return 0;

        int left =0, count =0, product =1;

        for(int right = 0; right < nums.size(); right++) {
            product *= nums[right];
            while( product >= k)
            {
                product /= nums[left];
                left++;
            }

            count += (right - left +1);
        }

        return count;
    }
};


int main()
{
	int size, k;
	std::vector<int> vector;

	std::cout << "Enter the size of the array: "; std::cin >> size;

	std::cout << "Enter the values for the array:  ";

	for(int i =0; i < size; i++) {
		int tmp;
		std::cin >> tmp;
		vector.push_back(tmp);
	}

	std::cout << "Enter the K value: "; std::cin >> k;

	Solution S1;
	std::cout << "The subarrays with product less than " << k << " are: " << S1.numSubarrayProductLessThanK(vector, k) << std::endl;

	return 0;
}
