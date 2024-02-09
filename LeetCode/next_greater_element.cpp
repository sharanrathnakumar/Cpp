#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> nextGreaterElement(std::vector<int>& nums1, std::vector<int>& nums2) {
         std::unordered_map<int, int> nextGreater;
    std::stack<int> st;

    for (int num : nums2) {
        while (!st.empty() && st.top() < num) {
            nextGreater[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }

    std::vector<int> result;
    for (int num : nums1) {
        if (nextGreater.count(num)) {
            result.push_back(nextGreater[num]);
        } else {
            result.push_back(-1);
        }
    }

    return result;
    }
};

int main()
{
	int size1, size2;
	std::vector<int> v1,v2,res;
	std::cout << "Enter the size(s): "; std::cin >> size1 >> size2;

	for (int i =0; i < size1; i++) {
		int tmp;
		std::cin >> tmp;
		v1.push_back(tmp);
	}
	
	for (int i =0; i < size2; i++) {
		int tmp;
		std::cin >> tmp;
		v2.push_back(tmp);
	}

	res = nextGreaterElement(v1,v2);

	std::cout << "Result array: ";

	for(int &value : res) {
		std::cout << value << " ";
	}

	std::cout << std::endl;
	return 0;
}
