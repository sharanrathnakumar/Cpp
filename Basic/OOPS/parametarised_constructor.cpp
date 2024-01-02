#include<iostream>

class Employee {

	public:
	int id;
	std::string name;

	Employee( int id, std::string name)
	{
		this->id = id;
		this->name = name;
	}


	void display()
	{
		std::cout << "ID: " << id << "\nName : " << name << std::endl;
	}
};

int main()
{
	Employee E1(1, "sharan");

	E1.display();

	return 0;

}
