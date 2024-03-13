#include <iostream>
#include <vector>

int FindIndex (std::vector<int> &v, int num) {
	for (int i =0; i < v.size(); i++) {
		if (v[i] == num) {
			return i;
		}
	}
	//Not present in the array hence return -1
	return -1;
}

int main() {

	int num = 0, size = 0;

	std::cout << "Enter the size of array: "; std::cin >> size;
	std::cout << "Enter the values for your array: ";

	std::vector<int> numVector;

	for (int i =0; i < size; i++) {
		int tmp;
		std::cin >> tmp;
		numVector.push_back(tmp);
	}

	std::cout << "Enter the number: "; std::cin >> num;
	std::cout << "The index of " << num << " is "<< FindIndex(numVector, num) << std::endl;
	return 0;
}
