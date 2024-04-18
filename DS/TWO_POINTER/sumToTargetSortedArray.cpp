#include <iostream>
#include <vector>
#include <algorithm>

bool isTargetSum(std::vector<int>&v, int &target) {
	int front =0, back = v.size()-1;

	while(front < back) {
		int sum = v[front]+v[back];
		if (target == sum)
			return true;
		if(sum > target) {
			back--;
		} else {
			front++;
		}
	}

	return false;
}

int main() {
	int size,target;
	std::cout << "Enter the array size: "; std::cin >> size;

	std::cout << "Enter the target value: "; std::cin >> target;
	std::cout << "Enter the values of the array:"; 
	std::vector<int> num;
	for(int i =0; i < size; i++) {
		int tmp;
		std::cin >> tmp;
		num.push_back(tmp);
	}
	//Algorith for sorted num list
	std::sort(num.begin(),num.end());

	std::cout << "The target " << (isTargetSum(num, target) ? "can be " : "cannot be ") << "summed" << std::endl;
	return 0;
} 
