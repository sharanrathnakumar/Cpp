#include<iostream>

class Employee {

	int id;

	public:
	Employee(int value) : id(value) {
		std::cout << "Parameterized constructor" << std::endl;
	}

	Employee(const Employee &other) : id(other.id) {
		std::cout << "Copy constructor" << std::endl;
	}

	void display()
	{
		std::cout << "Display ID : " << id << std::endl;
	}
};

int main()
{
	Employee E1(10);
	Employee E2 = E1;
	E1.display();
	E2.display();

	return 0;
}
