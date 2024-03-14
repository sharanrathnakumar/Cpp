#include <iostream>
#include <vector>

int BinarySearch(std::vector<int> &v, int num) {
	int min =0, mid =0, max = v.size()-1;

	while ( min <= max) {
		mid = min + (max -min)/2;

		if (v[mid] == num) {
			return mid;
		} else if (v[mid] > num) {
			max = mid -1;
		} else {
			min = mid +1;
		}
	}

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
	std::cout << "The index of " << num << " is "<< BinarySearch(numVector, num) << std::endl;
	return 0;
}

